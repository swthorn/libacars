/*
 *  This file is a part of libacars
 *
 *  Copyright (c) 2018-2019 Tomasz Lemiech <szpajder@gmail.com>
 */

#include <string.h>				// memcpy(), strdup()
#include <sys/time.h>				// struct timeval
#include <libacars/libacars.h>			// la_proto_node, la_proto_tree_find_protocol
#include <libacars/macros.h>			// la_assert()
#include <libacars/arinc.h>			// la_arinc_parse()
#include <libacars/media-adv.h>			// la_media_adv_parse()
#include <libacars/miam.h>			// la_miam_parse()
#include <libacars/crc.h>			// la_crc16_ccitt()
#include <libacars/vstring.h>			// la_vstring, LA_ISPRINTF()
#include <libacars/json.h>			// la_json_append_*()
#include <libacars/util.h>			// la_debug_print(), LA_CAST_PTR()
#include <libacars/reassembly.h>
#include <libacars/acars.h>

#define LA_ACARS_PREAMBLE_LEN	16		// including CRC and DEL, not including SOH
#define DEL 0x7f
#define STX 0x02
#define ETX 0x03
#define ETB 0x17
#define ACK 0x06
#define NAK 0x15
#define IS_DOWNLINK_BLK(bid) ((bid) >= '0' && (bid) <= '9')

#define HASH_INIT 5381
#define HASH_MULT 17

// FIXME: make this configurable
#define LA_ACARS_REASM_TABLE_CLEANUP_INTERVAL 50
static struct timeval reasm_timeout_uplink = { .tv_sec = 90, .tv_usec = 0 };	// VAT4
static struct timeval reasm_timeout_downlink = { .tv_sec = 11*60, .tv_usec = 0 }; // VGT4

typedef struct {
	char *reg, *label, *msg_num;
} la_acars_key;

uint32_t hash_string(char const *str, uint32_t h) {
	int h_work = (int)h;
	for(char const *p = str; *p != '\0'; p++) {
		h_work = h_work * HASH_MULT + (int)(*p);
	}
	return (uint32_t)h_work;
}

uint32_t la_acars_key_hash(void const *key) {
	la_acars_key *k = (la_acars_key *)key;
	uint32_t h = hash_string(k->reg, HASH_INIT);
	h = hash_string(k->label, h);
	h = hash_string(k->msg_num, h);
	return h;
}

bool la_acars_key_compare(void const *key1, void const *key2) {
	LA_CAST_PTR(k1, la_acars_key *, key1);
	LA_CAST_PTR(k2, la_acars_key *, key2);
	return (!strcmp(k1->reg, k2->reg) &&
		!strcmp(k1->label, k2->label) &&
		!strcmp(k1->msg_num, k2->msg_num));
}

void la_acars_key_destroy(void *ptr) {
	if(ptr == NULL) {
		return;
	}
	LA_CAST_PTR(key, la_acars_key *, ptr);
	la_debug_print("DESTROY KEY %s %s %s\n", key->reg, key->label, key->msg_num);
	LA_XFREE(key->reg);
	LA_XFREE(key->label);
	LA_XFREE(key->msg_num);
	LA_XFREE(key);
}

void *la_acars_tmp_key_get(void const *msg) {
	la_assert(msg != NULL);
	LA_CAST_PTR(amsg, la_acars_msg *, msg);
	LA_NEW(la_acars_key, key);
	key->reg = amsg->reg;
	key->label = amsg->label;
	key->msg_num = amsg->msg_num;
	return (void *)key;
}

void *la_acars_key_get(void const *msg) {
	la_assert(msg != NULL);
	LA_CAST_PTR(amsg, la_acars_msg *, msg);
	LA_NEW(la_acars_key, key);
	key->reg = strdup(amsg->reg);
	key->label = strdup(amsg->label);
	key->msg_num = strdup(amsg->msg_num);
	la_debug_print("ALLOC KEY %s %s %s\n", key->reg, key->label, key->msg_num);
	return (void *)key;
}

static la_reasm_table_funcs acars_reasm_funcs = {
	.get_key = la_acars_key_get,
	.get_tmp_key = la_acars_tmp_key_get,
	.hash_key = la_acars_key_hash,
	.compare_keys = la_acars_key_compare,
	.destroy_key = la_acars_key_destroy
};

la_proto_node *la_acars_decode_apps(char const * const label,
char const * const txt, la_msg_dir const msg_dir) {
	la_proto_node *ret = NULL;
	if(label == NULL || txt == NULL) {
		goto end;
	}
	switch(label[0]) {
	case 'A':
		switch(label[1]) {
		case '6':
		case 'A':
			if((ret = la_arinc_parse(txt, msg_dir)) != NULL) {
				goto end;
			}
			break;
		}
		break;
	case 'B':
		switch(label[1]) {
		case '6':
		case 'A':
			if((ret = la_arinc_parse(txt, msg_dir)) != NULL) {
				goto end;
			}
			break;
		}
		break;
	case 'H':
		switch(label[1]) {
		case '1':
			if((ret = la_arinc_parse(txt, msg_dir)) != NULL) {
				goto end;
			}
			if((ret = la_miam_parse(txt)) != NULL) {
				goto end;
			}
			break;
		}
		break;
	case 'M':
		switch(label[1]) {
		case 'A':
			if((ret = la_miam_parse(txt)) != NULL) {
				goto end;
			}
			break;
		}
		break;
	case 'S':
		switch(label[1]) {
		case 'A':
			if((ret = la_media_adv_parse(txt)) != NULL) {
				goto end;
			}
			break;
		}
		break;
	}
end:
	return ret;
}

#define COPY_IF_NOT_NULL(d, s, l) do { \
	if((d) != NULL && (s) != NULL) { \
		memcpy((d), (s), (l)); \
	} } while(0)

#define BUF_CLEAR(p, l) do { \
	if((p) != NULL) { \
		memset((p), 0, (l)); \
	} } while(0)

int la_acars_extract_sublabel_and_mfi(char const * const label, la_msg_dir const msg_dir,
	char const * const txt, int const len, char *sublabel, char *mfi) {

	if(txt == NULL || label == NULL || strlen(label) < 2) {
		return -1;
	}
	if(msg_dir != LA_MSG_DIR_AIR2GND && msg_dir != LA_MSG_DIR_GND2AIR) {
		return -1;
	}

	int consumed = 0;
	int remaining = len;
	char const *ptr = txt;
	char const *sublabel_ptr = NULL, *mfi_ptr = NULL;

	BUF_CLEAR(sublabel, 3);
	BUF_CLEAR(mfi, 3);

	if(label[0] == 'H' && label[1] == '1') {
		if(msg_dir == LA_MSG_DIR_GND2AIR) {
// Note: this algorithm works correctly only for service-related messages
// without SMT header. The header, if present, precedes the "- #" character
// sequence, while this algorithm expects this sequence to appear at the
// start of the message text. However this is not a big deal since the main
// purpose of this routine is to skip initial sublabel/MFI part and return
// a pointer to the beginning of the next layer application payload (eg.
// ARINC-622 ATS message). Right now libacars does not decode any application
// layer protocols transmitted with SMT headers, so it's not a huge issue.
			if(remaining >= 5 && strncmp(ptr, "- #", 3) == 0) {
				la_debug_print("Uplink sublabel: %c%c\n", ptr[3], ptr[4]);
				sublabel_ptr = ptr + 3;
				ptr += 5; consumed += 5; remaining -= 5;
			}
		} else if(msg_dir == LA_MSG_DIR_AIR2GND) {
			if(remaining >= 4 && ptr[0] == '#' && ptr[3] == 'B') {
				la_debug_print("Downlink sublabel: %c%c\n", ptr[1], ptr[2]);
				sublabel_ptr = ptr + 1;
				ptr += 4; consumed += 4; remaining -= 4;
			}
		}
// Look for MFI only if sublabel has been found
		if(sublabel_ptr == NULL) {
			goto end;
		}
// MFI format is the same for both directions
		if(remaining >= 4 && ptr[0] == '/' && ptr[3] == ' ') {
			la_debug_print("MFI: %c%c\n", ptr[1], ptr[2]);
			mfi_ptr = ptr + 1;
			ptr += 4; consumed += 4; remaining -= 4;
		}
	}
end:
	COPY_IF_NOT_NULL(sublabel, sublabel_ptr, 2);
	COPY_IF_NOT_NULL(mfi, mfi_ptr, 2);
	la_debug_print("consumed %d bytes\n", consumed);
	return consumed;
}

// Note: buf must contain raw ACARS bytes, NOT including initial SOH byte
// (0x01) and including terminating DEL byte (0x7f).
la_proto_node *la_acars_parse_and_reassemble(uint8_t *buf, int len, la_msg_dir msg_dir,
la_reasm_ctx *rtables, struct timeval rx_time) {
	if(buf == NULL) {
		return NULL;
	}

	la_proto_node *node = la_proto_node_new();
	LA_NEW(la_acars_msg, msg);
	node->data = msg;
	node->td = &la_DEF_acars_message;
	char *buf2 = LA_XCALLOC(len, sizeof(char));

	msg->err = false;
	if(len < LA_ACARS_PREAMBLE_LEN) {
		la_debug_print("Preamble too short: %u < %u\n", len, LA_ACARS_PREAMBLE_LEN);
		goto fail;
	}

	if(buf[len-1] != DEL) {
		la_debug_print("%02x: no DEL byte at end\n", buf[len-1]);
		goto fail;
	}
	len--;

	uint16_t crc = la_crc16_ccitt(buf, len, 0);
	la_debug_print("CRC check result: %04x\n", crc);
	len -= 2;
	msg->crc_ok = (crc == 0);

	int i = 0;
	for(i = 0; i < len; i++) {
		buf2[i] = buf[i] & 0x7f;
	}
	la_debug_print_buf_hex(buf2, len, "After CRC and parity bit removal:\n");
	la_debug_print("Length: %d\n", len);

	if(buf2[len-1] == ETX) {
		msg->final_block = true;
	} else if(buf2[len-1] == ETB) {
		msg->final_block = false;
	} else {
		la_debug_print("%02x: no ETX/ETB byte at end of text\n", buf2[len-1]);
		goto fail;
	}
	len--;
// Here we have DEL, CRC and ETX/ETB bytes removed.
// There at least 12 bytes remaining.

	int remaining = len;
	char *ptr = buf2;

	msg->mode = *ptr;
	ptr++; remaining--;

	memcpy(msg->reg, ptr, 7);
	msg->reg[7] = '\0';
	ptr += 7; remaining -= 7;

	msg->ack = *ptr;
	ptr++; remaining--;

// change special values to something printable
	if (msg->ack == NAK) {
		msg->ack = '!';
	} else if(msg->ack == ACK) {
		msg->ack = '^';
	}

	msg->label[0] = *ptr++;
	msg->label[1] = *ptr++;
	remaining -= 2;

	if (msg->label[1] == 0x7f) {
		msg->label[1] = 'd';
	}
	msg->label[2] = '\0';

	msg->block_id = *ptr;
	ptr++; remaining--;

	if (msg->block_id == 0) {
		msg->block_id = ' ';
	}
// If the message direction is unknown, guess it using the block ID character.
	if(msg_dir == LA_MSG_DIR_UNKNOWN) {
		if(IS_DOWNLINK_BLK(msg->block_id)) {
			msg_dir = LA_MSG_DIR_AIR2GND;
		} else {
			msg_dir = LA_MSG_DIR_GND2AIR;
		}
		la_debug_print("Assuming msg_dir=%d\n", msg_dir);
	}
	if(remaining < 1) {
// ACARS preamble has been consumed up to this point.
// If this is an uplink with an empty message text, then we are done.
// XXX: we are skipping the reassembly stage here, is this 100% correct?
// If this ever needs to be changed, special care has to be taken for
// empty ACKs (label: _<7F> aka _d), because they have out-of-sequence
// block IDs (X, Y, Z, X, ...).
		if(!IS_DOWNLINK_BLK(msg->block_id)) {
			msg->txt = strdup("");
			goto end;
		} else {
			la_debug_print("No text field in downlink message\n");
			goto fail;
		}
	}
// Otherwise we expect STX here.
	if(*ptr != STX) {
		la_debug_print("%02x: No STX byte after preamble\n", *ptr);
		goto fail;
	}
	ptr++; remaining--;

// Replace NULLs in message text to make it printable
// XXX: Should we replace all nonprintable chars here?
	for(i = 0; i < remaining; i++) {
		if(ptr[i] == 0) {
			ptr[i] = '.';
		}
	}
// Extract downlink-specific fields from message text
	if (IS_DOWNLINK_BLK(msg->block_id)) {
		if(remaining < 10) {
			la_debug_print("Downlink text field too short: %d < 10\n", remaining);
			goto fail;
		}
		memcpy(msg->msg_num, ptr, 3);
		msg->msg_num[3] = '\0';
		msg->msg_num_seq = ptr[3];
		ptr += 4; remaining -= 4;
		memcpy(msg->flight_id, ptr, 6);
		ptr += 6; remaining -= 6;
	}

// Extract sublabel and MFI if present
	int offset = la_acars_extract_sublabel_and_mfi(msg->label, msg_dir,
		ptr, remaining, msg->sublabel, msg->mfi);
	if(offset > 0) {
		ptr += offset;
		remaining -= offset;
	}

	la_reasm_table *acars_rtable = NULL;
	if(rtables != NULL) {		// reassembly engine is enabled
		acars_rtable = la_reasm_table_lookup(rtables, &la_DEF_acars_message);
		if(acars_rtable == NULL) {
			acars_rtable = la_reasm_table_init(rtables, &la_DEF_acars_message,
				acars_reasm_funcs, LA_ACARS_REASM_TABLE_CLEANUP_INTERVAL);
		}
		bool down = IS_DOWNLINK_BLK(msg->block_id);

// Need a null-terminated copy of the message text here.
// This will become unnecessary when the reassembly engine is converted
// to work with byte buffers instead of character strings.
		char *msg_text = LA_XCALLOC(remaining + 1, sizeof(char));
		if(remaining > 0) {
			memcpy(msg_text, ptr, remaining);
		}

		msg->reasm_status = la_reasm_fragment_add(acars_rtable,
		&(la_reasm_fragment_info){
			.msg_info = msg,
			.msg_data = msg_text,
			.seq_num = down ? msg->msg_num_seq - 'A' : msg->block_id - 'A',
			.seq_num_first = down ? 0 : SEQ_FIRST_NONE,
			.seq_num_wrap = down ? SEQ_WRAP_NONE : 'X' - 'A',
			.last_fragment = msg->final_block,
			.rx_time = rx_time,
			.reasm_timeout = down ? reasm_timeout_downlink : reasm_timeout_uplink
		});
// la_reasm_fragment_add() duplicates msg_data, so we can free it now.
		LA_XFREE(msg_text);
	}
	if(msg->reasm_status == LA_REASM_COMPLETE) {
		msg->txt = la_reasm_payload_get(acars_rtable, msg);
// XXX: unnecessary?
		if(msg->txt == NULL) {
			msg->txt = strdup("");
		}
	} else {	// this will also trigger when reassembly engine is disabled
		msg->txt = LA_XCALLOC(remaining + 1, sizeof(char));
		if(remaining > 0) {
			memcpy(msg->txt, ptr, remaining);
		}
	}
// XXX: do this only when reassembly is complete
	if(strlen(msg->txt) > 0) {
		node->next = la_acars_decode_apps(msg->label, msg->txt, msg_dir);
	}
	goto end;
fail:
	msg->err = true;
end:
	LA_XFREE(buf2);
	return node;
}

la_proto_node *la_acars_parse(uint8_t *buf, int len, la_msg_dir msg_dir) {
	return la_acars_parse_and_reassemble(buf, len, msg_dir, NULL,
		(struct timeval){ .tv_sec = 0, .tv_usec = 0 });
}

static char *reasm_status_descr[] = {
	[LA_REASM_UNKNOWN] = "unknown",
	[LA_REASM_COMPLETE] = "complete",
	[LA_REASM_IN_PROGRESS] = "in progress",
	[LA_REASM_SKIPPED] = "skipped",
	[LA_REASM_FIRST_FRAG_MISSING] = "first fragment missing",
	[LA_REASM_TIMED_OUT] = "timeout",
	[LA_REASM_DUPLICATE] = "duplicate",
	[LA_REASM_FRAG_OUT_OF_SEQUENCE] = "out of sequence",
	[LA_REASM_ARGS_INVALID] = "invalid args"
};

void la_acars_format_text(la_vstring *vstr, void const * const data, int indent) {
	la_assert(vstr);
	la_assert(data);
	la_assert(indent >= 0);

	LA_CAST_PTR(msg, la_acars_msg *, data);
	if(msg->err) {
		LA_ISPRINTF(vstr, indent, "-- Unparseable ACARS message\n");
		return;
	}
	LA_ISPRINTF(vstr, indent, "ACARS%s:\n", msg->crc_ok ? "" : " (warning: CRC error)");
	indent++;

	LA_ISPRINTF(vstr, indent, "Reassembly: %s\n", reasm_status_descr[msg->reasm_status]);
	LA_ISPRINTF(vstr, indent, "Reg: %s", msg->reg);
	if(IS_DOWNLINK_BLK(msg->block_id)) {
		la_vstring_append_sprintf(vstr, " Flight: %s\n", msg->flight_id);
	} else {
		la_vstring_append_sprintf(vstr, "%s", "\n");
	}

	LA_ISPRINTF(vstr, indent, "Mode: %1c Label: %s Blk id: %c More: %d Ack: %c",
		msg->mode, msg->label, msg->block_id, !msg->final_block, msg->ack);
	if(IS_DOWNLINK_BLK(msg->block_id)) {
		la_vstring_append_sprintf(vstr, " Msg num: %s%c\n", msg->msg_num, msg->msg_num_seq);
	} else {
		la_vstring_append_sprintf(vstr, "%s", "\n");
	}
	if(msg->sublabel[0] != '\0') {
		LA_ISPRINTF(vstr, indent, "Sublabel: %s", msg->sublabel);
		if(msg->mfi[0] != '\0') {
			la_vstring_append_sprintf(vstr, " MFI: %s", msg->mfi);
		}
		la_vstring_append_sprintf(vstr, "%s", "\n");
	}
	if(msg->txt[0] != '\0') {
		LA_ISPRINTF(vstr, indent, "Message:\n");
		la_isprintf_multiline_text(vstr, indent+1, msg->txt);
	}
}

void la_acars_format_json(la_vstring *vstr, void const * const data) {
	la_assert(vstr);
	la_assert(data);

	LA_CAST_PTR(msg, la_acars_msg *, data);
	la_json_append_bool(vstr, "err", msg->err);
	if(msg->err) {
		return;
	}
	la_json_append_bool(vstr, "crc_ok", msg->crc_ok);
	la_json_append_bool(vstr, "more", !msg->final_block);
	la_json_append_string(vstr, "reg", msg->reg);
	la_json_append_char(vstr, "mode", msg->mode);
	la_json_append_string(vstr, "label", msg->label);
	la_json_append_char(vstr, "blk_id", msg->block_id);
	la_json_append_char(vstr, "ack", msg->ack);
	if(IS_DOWNLINK_BLK(msg->block_id)) {
		la_json_append_string(vstr, "flight", msg->flight_id);
		la_json_append_string(vstr, "msg_num", msg->msg_num);
		la_json_append_char(vstr, "msg_num_seq", msg->msg_num_seq);
	}
	if(msg->sublabel[0] != '\0') {
		la_json_append_string(vstr, "sublabel", msg->sublabel);
	}
	if(msg->mfi[0] != '\0') {
		la_json_append_string(vstr, "mfi", msg->mfi);
	}
	la_json_append_string(vstr, "msg_text", msg->txt);
}

void la_acars_destroy(void *data) {
	if(data == NULL) {
		return;
	}
	LA_CAST_PTR(msg, la_acars_msg *, data);
	LA_XFREE(msg->txt);
	LA_XFREE(data);
}

la_type_descriptor const la_DEF_acars_message = {
	.format_text = la_acars_format_text,
	.format_json = la_acars_format_json,
	.json_key = "acars",
	.destroy = la_acars_destroy
};

la_proto_node *la_proto_tree_find_acars(la_proto_node *root) {
	return la_proto_tree_find_protocol(root, &la_DEF_acars_message);
}

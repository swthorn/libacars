/*
 *  This file is a part of libacars
 *
 *  Copyright (c) 2018 Tomasz Lemiech <szpajder@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "asn1/FANSATCDownlinkMessage.h"	// asn_DEF_FANSATCDownlinkMessage
#include "asn1/FANSATCUplinkMessage.h"		// asn_DEF_FANSATCUplinkMessage
#include "asn1/asn_application.h"		// asn_sprintf()
#include "macros.h"				// la_assert
#include "asn1-util.h"				// la_asn1_decode_as()
#include "asn1-format-cpdlc.h"			// la_asn1_output_cpdlc()
#include "cpdlc.h"				// la_cpdlc_msg
#include "libacars.h"				// la_proto_node, la_config
#include "util.h"				// la_debug_print(), LA_CAST_PTR
#include "vstring.h"				// la_vstring, la_vstring_append_sprintf()

la_proto_node *la_cpdlc_parse(uint8_t *buf, int len, la_msg_dir const msg_dir) {
	if(buf == NULL)
		return NULL;

	la_proto_node *node = la_proto_node_new();
	la_cpdlc_msg *msg = LA_XCALLOC(1, sizeof(la_cpdlc_msg));
	node->data = msg;
	node->td = &la_DEF_cpdlc_message;

	if(msg_dir == LA_MSG_DIR_GND2AIR) {
		msg->asn_type = &asn_DEF_FANSATCUplinkMessage;
	} else if(msg_dir == LA_MSG_DIR_AIR2GND) {
		msg->asn_type = &asn_DEF_FANSATCDownlinkMessage;
	}
	la_assert(msg->asn_type != NULL);
	if(len == 0) {
// empty payload is not an error
		la_debug_print("%s", "Empty CPDLC message, decoding skipped\n");
		return node;
	}

	la_debug_print("Decoding as %s, len: %d\n", msg->asn_type->name, len);
	if(la_asn1_decode_as(msg->asn_type, &msg->data, buf, len) != 0) {
		msg->err = 1;
	}
	return node;
}

void la_cpdlc_format_text(la_vstring *vstr, void const * const data, int indent) {
	la_assert(vstr);
	la_assert(data);
	la_assert(indent >= 0);

	LA_CAST_PTR(msg, la_cpdlc_msg *, data);
	if(msg->err) {
		LA_ISPRINTF(vstr, indent, "%s", "-- Unparseable FANS-1/A message\n");
		return;
	}
	if(msg->asn_type != NULL) {
		if(msg->data != NULL) {
			if(la_config.dump_asn1) {
				// asn_fprint does not indent the first line
				if(indent > 0) {
					LA_ISPRINTF(vstr, indent * 4, "%s", "");
				}
				asn_sprintf(vstr, msg->asn_type, msg->data, indent+1);
			}
			la_asn1_output_cpdlc_as_text(vstr, msg->asn_type, msg->data, indent);
		} else {
			LA_ISPRINTF(vstr, indent, "%s\n", "-- <empty PDU>");
		}
	}
}

void la_cpdlc_destroy(void *data) {
	if(data == NULL) {
		return;
	}
	LA_CAST_PTR(msg, la_cpdlc_msg *, data);
	if(msg->asn_type != NULL) {
		msg->asn_type->free_struct(msg->asn_type, msg->data, 0);
	}
	LA_XFREE(data);
}

la_type_descriptor const la_DEF_cpdlc_message = {
	.header = NULL,		// header is the label of the outermost ASN.1 tag
	.format_text = la_cpdlc_format_text,
	.destroy = la_cpdlc_destroy
};

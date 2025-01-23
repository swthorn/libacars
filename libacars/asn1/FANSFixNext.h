/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSFixNext_H_
#define	_FANSFixNext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSPosition.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSFixNext */
typedef FANSPosition_t	 FANSFixNext_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_FANSFixNext_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_FANSFixNext;
asn_struct_free_f FANSFixNext_free;
asn_struct_print_f FANSFixNext_print;
asn_constr_check_f FANSFixNext_constraint;
ber_type_decoder_f FANSFixNext_decode_ber;
der_type_encoder_f FANSFixNext_encode_der;
xer_type_decoder_f FANSFixNext_decode_xer;
xer_type_encoder_f FANSFixNext_encode_xer;
jer_type_encoder_f FANSFixNext_encode_jer;
oer_type_decoder_f FANSFixNext_decode_oer;
oer_type_encoder_f FANSFixNext_encode_oer;
per_type_decoder_f FANSFixNext_decode_uper;
per_type_encoder_f FANSFixNext_encode_uper;
per_type_decoder_f FANSFixNext_decode_aper;
per_type_encoder_f FANSFixNext_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSFixNext_H_ */
#include <asn_internal.h>

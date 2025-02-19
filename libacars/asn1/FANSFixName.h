/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSFixName_H_
#define	_FANSFixName_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IA5String.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSFixName */
typedef IA5String_t	 FANSFixName_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_FANSFixName_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_FANSFixName;
asn_struct_free_f FANSFixName_free;
asn_struct_print_f FANSFixName_print;
asn_constr_check_f FANSFixName_constraint;
ber_type_decoder_f FANSFixName_decode_ber;
der_type_encoder_f FANSFixName_encode_der;
xer_type_decoder_f FANSFixName_decode_xer;
xer_type_encoder_f FANSFixName_encode_xer;
jer_type_encoder_f FANSFixName_encode_jer;
oer_type_decoder_f FANSFixName_decode_oer;
oer_type_encoder_f FANSFixName_encode_oer;
per_type_decoder_f FANSFixName_decode_uper;
per_type_encoder_f FANSFixName_encode_uper;
per_type_decoder_f FANSFixName_decode_aper;
per_type_encoder_f FANSFixName_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSFixName_H_ */
#include "asn_internal.h"

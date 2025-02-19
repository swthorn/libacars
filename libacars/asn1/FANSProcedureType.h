/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSProcedureType_H_
#define	_FANSProcedureType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSProcedureType {
	FANSProcedureType_arrival	= 0,
	FANSProcedureType_approach	= 1,
	FANSProcedureType_departure	= 2
} e_FANSProcedureType;

/* FANSProcedureType */
typedef long	 FANSProcedureType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_FANSProcedureType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_FANSProcedureType;
extern const asn_INTEGER_specifics_t asn_SPC_FANSProcedureType_specs_1;
asn_struct_free_f FANSProcedureType_free;
asn_struct_print_f FANSProcedureType_print;
asn_constr_check_f FANSProcedureType_constraint;
ber_type_decoder_f FANSProcedureType_decode_ber;
der_type_encoder_f FANSProcedureType_encode_der;
xer_type_decoder_f FANSProcedureType_decode_xer;
xer_type_encoder_f FANSProcedureType_encode_xer;
jer_type_encoder_f FANSProcedureType_encode_jer;
oer_type_decoder_f FANSProcedureType_decode_oer;
oer_type_encoder_f FANSProcedureType_encode_oer;
per_type_decoder_f FANSProcedureType_decode_uper;
per_type_encoder_f FANSProcedureType_encode_uper;
per_type_decoder_f FANSProcedureType_decode_aper;
per_type_encoder_f FANSProcedureType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSProcedureType_H_ */
#include "asn_internal.h"

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSICAOFacilityFunction_H_
#define	_FANSICAOFacilityFunction_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSICAOFacilityFunction {
	FANSICAOFacilityFunction_center	= 0,
	FANSICAOFacilityFunction_approach	= 1,
	FANSICAOFacilityFunction_tower	= 2,
	FANSICAOFacilityFunction_final	= 3,
	FANSICAOFacilityFunction_groundControl	= 4,
	FANSICAOFacilityFunction_clearanceDelivery	= 5,
	FANSICAOFacilityFunction_departure	= 6,
	FANSICAOFacilityFunction_control	= 7
} e_FANSICAOFacilityFunction;

/* FANSICAOFacilityFunction */
typedef long	 FANSICAOFacilityFunction_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_FANSICAOFacilityFunction_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_FANSICAOFacilityFunction;
extern const asn_INTEGER_specifics_t asn_SPC_FANSICAOFacilityFunction_specs_1;
asn_struct_free_f FANSICAOFacilityFunction_free;
asn_struct_print_f FANSICAOFacilityFunction_print;
asn_constr_check_f FANSICAOFacilityFunction_constraint;
ber_type_decoder_f FANSICAOFacilityFunction_decode_ber;
der_type_encoder_f FANSICAOFacilityFunction_encode_der;
xer_type_decoder_f FANSICAOFacilityFunction_decode_xer;
xer_type_encoder_f FANSICAOFacilityFunction_encode_xer;
jer_type_encoder_f FANSICAOFacilityFunction_encode_jer;
oer_type_decoder_f FANSICAOFacilityFunction_decode_oer;
oer_type_encoder_f FANSICAOFacilityFunction_encode_oer;
per_type_decoder_f FANSICAOFacilityFunction_decode_uper;
per_type_encoder_f FANSICAOFacilityFunction_encode_uper;
per_type_decoder_f FANSICAOFacilityFunction_decode_aper;
per_type_encoder_f FANSICAOFacilityFunction_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSICAOFacilityFunction_H_ */
#include "asn_internal.h"

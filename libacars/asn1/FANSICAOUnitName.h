/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSICAOUnitName_H_
#define	_FANSICAOUnitName_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSICAOFacilityIdentification.h"
#include "FANSICAOFacilityFunction.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSICAOUnitName */
typedef struct FANSICAOUnitName {
	FANSICAOFacilityIdentification_t	 iCAOFacilityIdentification;
	FANSICAOFacilityFunction_t	 iCAOFacilityFunction;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSICAOUnitName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSICAOUnitName;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSICAOUnitName_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSICAOUnitName_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSICAOUnitName_H_ */
#include "asn_internal.h"

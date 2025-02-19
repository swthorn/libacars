/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSLegType_H_
#define	_FANSLegType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSLegDistance.h"
#include "FANSLegTime.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSLegType_PR {
	FANSLegType_PR_NOTHING,	/* No components present */
	FANSLegType_PR_legDistance,
	FANSLegType_PR_legTime
} FANSLegType_PR;

/* FANSLegType */
typedef struct FANSLegType {
	FANSLegType_PR present;
	union FANSLegType_u {
		FANSLegDistance_t	 legDistance;
		FANSLegTime_t	 legTime;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSLegType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSLegType;
extern asn_CHOICE_specifics_t asn_SPC_FANSLegType_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSLegType_1[2];
extern asn_per_constraints_t asn_PER_type_FANSLegType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSLegType_H_ */
#include "asn_internal.h"

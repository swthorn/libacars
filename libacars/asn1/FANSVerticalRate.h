/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSVerticalRate_H_
#define	_FANSVerticalRate_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSVerticalRateEnglish.h"
#include "FANSVerticalRateMetric.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSVerticalRate_PR {
	FANSVerticalRate_PR_NOTHING,	/* No components present */
	FANSVerticalRate_PR_verticalRateEnglish,
	FANSVerticalRate_PR_verticalRateMetric
} FANSVerticalRate_PR;

/* FANSVerticalRate */
typedef struct FANSVerticalRate {
	FANSVerticalRate_PR present;
	union FANSVerticalRate_u {
		FANSVerticalRateEnglish_t	 verticalRateEnglish;
		FANSVerticalRateMetric_t	 verticalRateMetric;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSVerticalRate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSVerticalRate;
extern asn_CHOICE_specifics_t asn_SPC_FANSVerticalRate_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSVerticalRate_1[2];
extern asn_per_constraints_t asn_PER_type_FANSVerticalRate_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSVerticalRate_H_ */
#include "asn_internal.h"

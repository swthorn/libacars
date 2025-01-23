/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSFrequency_H_
#define	_FANSFrequency_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSFrequencyhf.h"
#include "FANSFrequencyvhf.h"
#include "FANSFrequencyuhf.h"
#include "FANSFrequencysatchannel.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSFrequency_PR {
	FANSFrequency_PR_NOTHING,	/* No components present */
	FANSFrequency_PR_frequencyhf,
	FANSFrequency_PR_frequencyvhf,
	FANSFrequency_PR_frequencyuhf,
	FANSFrequency_PR_frequencysatchannel
} FANSFrequency_PR;

/* FANSFrequency */
typedef struct FANSFrequency {
	FANSFrequency_PR present;
	union FANSFrequency_u {
		FANSFrequencyhf_t	 frequencyhf;
		FANSFrequencyvhf_t	 frequencyvhf;
		FANSFrequencyuhf_t	 frequencyuhf;
		FANSFrequencysatchannel_t	 frequencysatchannel;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSFrequency_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSFrequency;
extern asn_CHOICE_specifics_t asn_SPC_FANSFrequency_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSFrequency_1[4];
extern asn_per_constraints_t asn_PER_type_FANSFrequency_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSFrequency_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSRTARequiredTimeArrivalSequence_H_
#define	_FANSRTARequiredTimeArrivalSequence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSRTARequiredTimeArrival;

/* FANSRTARequiredTimeArrivalSequence */
typedef struct FANSRTARequiredTimeArrivalSequence {
	A_SEQUENCE_OF(struct FANSRTARequiredTimeArrival) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSRTARequiredTimeArrivalSequence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSRTARequiredTimeArrivalSequence;
extern asn_SET_OF_specifics_t asn_SPC_FANSRTARequiredTimeArrivalSequence_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSRTARequiredTimeArrivalSequence_1[1];
extern asn_per_constraints_t asn_PER_type_FANSRTARequiredTimeArrivalSequence_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSRTARequiredTimeArrivalSequence_H_ */
#include <asn_internal.h>

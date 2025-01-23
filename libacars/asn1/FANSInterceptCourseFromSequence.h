/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSInterceptCourseFromSequence_H_
#define	_FANSInterceptCourseFromSequence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSInterceptCourseFrom;

/* FANSInterceptCourseFromSequence */
typedef struct FANSInterceptCourseFromSequence {
	A_SEQUENCE_OF(struct FANSInterceptCourseFrom) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSInterceptCourseFromSequence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSInterceptCourseFromSequence;
extern asn_SET_OF_specifics_t asn_SPC_FANSInterceptCourseFromSequence_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSInterceptCourseFromSequence_1[1];
extern asn_per_constraints_t asn_PER_type_FANSInterceptCourseFromSequence_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSInterceptCourseFromSequence_H_ */
#include <asn_internal.h>

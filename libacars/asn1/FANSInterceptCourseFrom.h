/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSInterceptCourseFrom_H_
#define	_FANSInterceptCourseFrom_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSInterceptCourseFromSelection.h"
#include "FANSDegrees.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSInterceptCourseFrom */
typedef struct FANSInterceptCourseFrom {
	FANSInterceptCourseFromSelection_t	 interceptCourceFromSelection;
	FANSDegrees_t	 degrees;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSInterceptCourseFrom_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSInterceptCourseFrom;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSInterceptCourseFrom_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSInterceptCourseFrom_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSInterceptCourseFrom_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSDistanceOffsetDirection_H_
#define	_FANSDistanceOffsetDirection_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSDistanceOffset.h"
#include "FANSDirection.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSDistanceOffsetDirection */
typedef struct FANSDistanceOffsetDirection {
	FANSDistanceOffset_t	 distanceOffset;
	FANSDirection_t	 direction;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSDistanceOffsetDirection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSDistanceOffsetDirection;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSDistanceOffsetDirection_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSDistanceOffsetDirection_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSDistanceOffsetDirection_H_ */
#include <asn_internal.h>

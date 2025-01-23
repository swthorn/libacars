/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSTimeDistanceToFromPosition_H_
#define	_FANSTimeDistanceToFromPosition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSTime.h"
#include "FANSDistance.h"
#include "FANSToFrom.h"
#include "FANSPosition.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSTimeDistanceToFromPosition */
typedef struct FANSTimeDistanceToFromPosition {
	FANSTime_t	 time;
	FANSDistance_t	 distance;
	FANSToFrom_t	 toFrom;
	FANSPosition_t	 position;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSTimeDistanceToFromPosition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSTimeDistanceToFromPosition;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSTimeDistanceToFromPosition_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSTimeDistanceToFromPosition_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSTimeDistanceToFromPosition_H_ */
#include <asn_internal.h>

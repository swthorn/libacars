/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSATWAlongTrackWaypoint_H_
#define	_FANSATWAlongTrackWaypoint_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSPosition.h"
#include "FANSATWDistance.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSSpeed;
struct FANSATWAltitudeSequence;

/* FANSATWAlongTrackWaypoint */
typedef struct FANSATWAlongTrackWaypoint {
	FANSPosition_t	 position;
	FANSATWDistance_t	 aTWdistance;
	struct FANSSpeed	*speed;	/* OPTIONAL */
	struct FANSATWAltitudeSequence	*aTWaltitudesequence;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSATWAlongTrackWaypoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSATWAlongTrackWaypoint;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSATWAlongTrackWaypoint_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSATWAlongTrackWaypoint_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FANSSpeed.h"
#include "FANSATWAltitudeSequence.h"

#endif	/* _FANSATWAlongTrackWaypoint_H_ */
#include "asn_internal.h"

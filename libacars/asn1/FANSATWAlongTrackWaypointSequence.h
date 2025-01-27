/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSATWAlongTrackWaypointSequence_H_
#define	_FANSATWAlongTrackWaypointSequence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSATWAlongTrackWaypoint;

/* FANSATWAlongTrackWaypointSequence */
typedef struct FANSATWAlongTrackWaypointSequence {
	A_SEQUENCE_OF(struct FANSATWAlongTrackWaypoint) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSATWAlongTrackWaypointSequence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSATWAlongTrackWaypointSequence;
extern asn_SET_OF_specifics_t asn_SPC_FANSATWAlongTrackWaypointSequence_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSATWAlongTrackWaypointSequence_1[1];
extern asn_per_constraints_t asn_PER_type_FANSATWAlongTrackWaypointSequence_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FANSATWAlongTrackWaypoint.h"

#endif	/* _FANSATWAlongTrackWaypointSequence_H_ */
#include "asn_internal.h"

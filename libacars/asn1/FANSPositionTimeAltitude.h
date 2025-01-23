/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSPositionTimeAltitude_H_
#define	_FANSPositionTimeAltitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSPosition.h"
#include "FANSTime.h"
#include "FANSAltitude.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSPositionTimeAltitude */
typedef struct FANSPositionTimeAltitude {
	FANSPosition_t	 position;
	FANSTime_t	 time;
	FANSAltitude_t	 altitude;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSPositionTimeAltitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSPositionTimeAltitude;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSPositionTimeAltitude_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSPositionTimeAltitude_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSPositionTimeAltitude_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSLongitudeReportingPoints_H_
#define	_FANSLongitudeReportingPoints_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSLongitudeDirection.h"
#include "FANSLongitudeDegrees.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSLongitudeReportingPoints */
typedef struct FANSLongitudeReportingPoints {
	FANSLongitudeDirection_t	 longitudeDirection;
	FANSLongitudeDegrees_t	 longitudeDegrees;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSLongitudeReportingPoints_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSLongitudeReportingPoints;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSLongitudeReportingPoints_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSLongitudeReportingPoints_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSLongitudeReportingPoints_H_ */
#include <asn_internal.h>

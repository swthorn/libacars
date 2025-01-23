/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSLatLonReportingPoints_H_
#define	_FANSLatLonReportingPoints_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSLatLonReportingPoints_PR {
	FANSLatLonReportingPoints_PR_NOTHING,	/* No components present */
	FANSLatLonReportingPoints_PR_latitudeReportingPoints,
	FANSLatLonReportingPoints_PR_longitudeReportingPoints
} FANSLatLonReportingPoints_PR;

/* Forward declarations */
struct FANSLatitudeReportingPoints;
struct FANSLongitudeReportingPoints;

/* FANSLatLonReportingPoints */
typedef struct FANSLatLonReportingPoints {
	FANSLatLonReportingPoints_PR present;
	union FANSLatLonReportingPoints_u {
		struct FANSLatitudeReportingPoints	*latitudeReportingPoints;
		struct FANSLongitudeReportingPoints	*longitudeReportingPoints;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSLatLonReportingPoints_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSLatLonReportingPoints;
extern asn_CHOICE_specifics_t asn_SPC_FANSLatLonReportingPoints_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSLatLonReportingPoints_1[2];
extern asn_per_constraints_t asn_PER_type_FANSLatLonReportingPoints_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSLatLonReportingPoints_H_ */
#include <asn_internal.h>

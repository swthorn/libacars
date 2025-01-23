/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSPlaceBearingDistance_H_
#define	_FANSPlaceBearingDistance_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSFixName.h"
#include "FANSDegrees.h"
#include "FANSDistance.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSLatitudeLongitude;

/* FANSPlaceBearingDistance */
typedef struct FANSPlaceBearingDistance {
	FANSFixName_t	 fixName;
	struct FANSLatitudeLongitude	*latitudeLongitude;	/* OPTIONAL */
	FANSDegrees_t	 degrees;
	FANSDistance_t	 distance;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSPlaceBearingDistance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSPlaceBearingDistance;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSPlaceBearingDistance_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSPlaceBearingDistance_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSPlaceBearingDistance_H_ */
#include <asn_internal.h>

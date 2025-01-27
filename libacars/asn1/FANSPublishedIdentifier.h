/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSPublishedIdentifier_H_
#define	_FANSPublishedIdentifier_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSFixName.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSLatitudeLongitude;

/* FANSPublishedIdentifier */
typedef struct FANSPublishedIdentifier {
	FANSFixName_t	 fixName;
	struct FANSLatitudeLongitude	*latitudeLongitude;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSPublishedIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSPublishedIdentifier;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSPublishedIdentifier_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSPublishedIdentifier_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FANSLatitudeLongitude.h"

#endif	/* _FANSPublishedIdentifier_H_ */
#include "asn_internal.h"

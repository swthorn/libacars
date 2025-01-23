/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSTime_H_
#define	_FANSTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSTimehours.h"
#include "FANSTimeminutes.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSTime */
typedef struct FANSTime {
	FANSTimehours_t	 hours;
	FANSTimeminutes_t	 minutes;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSTime;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSTime_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSTime_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSTime_H_ */
#include <asn_internal.h>

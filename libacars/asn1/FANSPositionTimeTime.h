/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSPositionTimeTime_H_
#define	_FANSPositionTimeTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSPosition.h"
#include "FANSTimeTime.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSPositionTimeTime */
typedef struct FANSPositionTimeTime {
	FANSPosition_t	 position;
	FANSTimeTime_t	 time_seqOf;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSPositionTimeTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSPositionTimeTime;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSPositionTimeTime_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSPositionTimeTime_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSPositionTimeTime_H_ */
#include "asn_internal.h"

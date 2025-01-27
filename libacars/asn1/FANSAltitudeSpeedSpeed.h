/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSAltitudeSpeedSpeed_H_
#define	_FANSAltitudeSpeedSpeed_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSAltitude.h"
#include "FANSSpeedSpeed.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSAltitudeSpeedSpeed */
typedef struct FANSAltitudeSpeedSpeed {
	FANSAltitude_t	 altitude;
	FANSSpeedSpeed_t	 speed_seqOf;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSAltitudeSpeedSpeed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSAltitudeSpeedSpeed;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSAltitudeSpeedSpeed_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSAltitudeSpeedSpeed_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _FANSAltitudeSpeedSpeed_H_ */
#include "asn_internal.h"

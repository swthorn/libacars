/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSSpeedSpeed_H_
#define	_FANSSpeedSpeed_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSSpeed;

/* FANSSpeedSpeed */
typedef struct FANSSpeedSpeed {
	A_SEQUENCE_OF(struct FANSSpeed) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSSpeedSpeed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSSpeedSpeed;
extern asn_SET_OF_specifics_t asn_SPC_FANSSpeedSpeed_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSSpeedSpeed_1[1];
extern asn_per_constraints_t asn_PER_type_FANSSpeedSpeed_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FANSSpeed.h"

#endif	/* _FANSSpeedSpeed_H_ */
#include "asn_internal.h"

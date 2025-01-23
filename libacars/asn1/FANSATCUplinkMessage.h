/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#ifndef	_FANSATCUplinkMessage_H_
#define	_FANSATCUplinkMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSATCMessageHeader.h"
#include "FANSATCUplinkMsgElementId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSATCUplinkMsgElementIdSequence;

/* FANSATCUplinkMessage */
typedef struct FANSATCUplinkMessage {
	FANSATCMessageHeader_t	 aTCMessageheader;
	FANSATCUplinkMsgElementId_t	 aTCuplinkmsgelementId;
	struct FANSATCUplinkMsgElementIdSequence	*aTCuplinkmsgelementid_seqOf;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSATCUplinkMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSATCUplinkMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSATCUplinkMessage_H_ */
#include <asn_internal.h>

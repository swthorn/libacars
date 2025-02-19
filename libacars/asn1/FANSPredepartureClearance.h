/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSPredepartureClearance_H_
#define	_FANSPredepartureClearance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSAircraftFlightIdentification.h"
#include "FANSAircraftType.h"
#include "FANSTimeDepartureEdct.h"
#include "FANSRouteClearance.h"
#include "FANSFrequencyDeparture.h"
#include "FANSBeaconCode.h"
#include "FANSPDCrevision.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSAircraftEquipmentCode;
struct FANSAltitudeRestriction;

/* FANSPredepartureClearance */
typedef struct FANSPredepartureClearance {
	FANSAircraftFlightIdentification_t	 aircraftFlightIdentification;
	FANSAircraftType_t	*aircraftType;	/* OPTIONAL */
	struct FANSAircraftEquipmentCode	*aircraftEquipmentCode;	/* OPTIONAL */
	FANSTimeDepartureEdct_t	 timeDepartureEdct;
	FANSRouteClearance_t	 routeClearance;
	struct FANSAltitudeRestriction	*altitudeRestriction;	/* OPTIONAL */
	FANSFrequencyDeparture_t	 frequencyDeparture;
	FANSBeaconCode_t	 beaconCode;
	FANSPDCrevision_t	 pDCrevision;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSPredepartureClearance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSPredepartureClearance;
extern asn_SEQUENCE_specifics_t asn_SPC_FANSPredepartureClearance_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSPredepartureClearance_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FANSAircraftEquipmentCode.h"
#include "FANSAltitudeRestriction.h"

#endif	/* _FANSPredepartureClearance_H_ */
#include "asn_internal.h"

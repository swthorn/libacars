/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSAltitude_H_
#define	_FANSAltitude_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSAltitudeQNH.h"
#include "FANSAltitudeQNHMeters.h"
#include "FANSAltitudeQFE.h"
#include "FANSAltitudeQFEMeters.h"
#include "FANSAltitudeGNSSFeet.h"
#include "FANSAltitudeGNSSMeters.h"
#include "FANSAltitudeFlightLevel.h"
#include "FANSAltitudeFlightLevelMetric.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSAltitude_PR {
	FANSAltitude_PR_NOTHING,	/* No components present */
	FANSAltitude_PR_altitudeQNH,
	FANSAltitude_PR_altitudeQNHMeters,
	FANSAltitude_PR_altitudeQFE,
	FANSAltitude_PR_altitudeQFEMeters,
	FANSAltitude_PR_altitudeGNSSFeet,
	FANSAltitude_PR_altitudeGNSSMeters,
	FANSAltitude_PR_altitudeFlightLevel,
	FANSAltitude_PR_altitudeFlightLevelMetric
} FANSAltitude_PR;

/* FANSAltitude */
typedef struct FANSAltitude {
	FANSAltitude_PR present;
	union FANSAltitude_u {
		FANSAltitudeQNH_t	 altitudeQNH;
		FANSAltitudeQNHMeters_t	 altitudeQNHMeters;
		FANSAltitudeQFE_t	 altitudeQFE;
		FANSAltitudeQFEMeters_t	 altitudeQFEMeters;
		FANSAltitudeGNSSFeet_t	 altitudeGNSSFeet;
		FANSAltitudeGNSSMeters_t	 altitudeGNSSMeters;
		FANSAltitudeFlightLevel_t	 altitudeFlightLevel;
		FANSAltitudeFlightLevelMetric_t	 altitudeFlightLevelMetric;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSAltitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSAltitude;
extern asn_CHOICE_specifics_t asn_SPC_FANSAltitude_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSAltitude_1[8];
extern asn_per_constraints_t asn_PER_type_FANSAltitude_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSAltitude_H_ */
#include "asn_internal.h"

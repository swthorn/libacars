/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#ifndef	_FANSATCUplinkMsgElementId_H_
#define	_FANSATCUplinkMsgElementId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "FANSAltitude.h"
#include "FANSTime.h"
#include "FANSPosition.h"
#include "FANSTimeAltitude.h"
#include "FANSPositionAltitude.h"
#include "FANSAltitudeTime.h"
#include "FANSAltitudePosition.h"
#include "FANSAltitudeAltitude.h"
#include "FANSPositionAltitudeAltitude.h"
#include "FANSPositionTime.h"
#include "FANSPositionTimeTime.h"
#include "FANSPositionSpeed.h"
#include "FANSPositionTimeAltitude.h"
#include "FANSPositionAltitudeSpeed.h"
#include "FANSTimePositionAltitude.h"
#include "FANSTimePositionAltitudeSpeed.h"
#include "FANSDistanceOffsetDirection.h"
#include "FANSPositionDistanceOffsetDirection.h"
#include "FANSTimeDistanceOffsetDirection.h"
#include "FANSPredepartureClearance.h"
#include "FANSTimePosition.h"
#include "FANSPositionPosition.h"
#include "FANSPositionRouteClearance.h"
#include "FANSRouteClearance.h"
#include "FANSProcedureName.h"
#include "FANSPositionProcedureName.h"
#include "FANSHoldClearance.h"
#include "FANSDirectionDegrees.h"
#include "FANSPositionDegrees.h"
#include "FANSTimeSpeed.h"
#include "FANSAltitudeSpeed.h"
#include "FANSTimeSpeedSpeed.h"
#include "FANSPositionSpeedSpeed.h"
#include "FANSAltitudeSpeedSpeed.h"
#include "FANSSpeed.h"
#include "FANSSpeedSpeed.h"
#include "FANSICAOUnitNameFrequency.h"
#include "FANSPositionICAOUnitNameFrequency.h"
#include "FANSTimeICAOunitnameFrequency.h"
#include "FANSBeaconCode.h"
#include "FANSAltimeter.h"
#include "FANSFrequency.h"
#include "FANSATISCode.h"
#include "FANSErrorInformation.h"
#include "FANSICAOfacilityDesignation.h"
#include "FANSICAOFacilityDesignationTp4Table.h"
#include "FANSFreeText.h"
#include "FANSVerticalRate.h"
#include "FANSToFromPosition.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSATCUplinkMsgElementId_PR {
	FANSATCUplinkMsgElementId_PR_NOTHING,	/* No components present */
	FANSATCUplinkMsgElementId_PR_uM0NULL,
	FANSATCUplinkMsgElementId_PR_uM1NULL,
	FANSATCUplinkMsgElementId_PR_uM2NULL,
	FANSATCUplinkMsgElementId_PR_uM3NULL,
	FANSATCUplinkMsgElementId_PR_uM4NULL,
	FANSATCUplinkMsgElementId_PR_uM5NULL,
	FANSATCUplinkMsgElementId_PR_uM6Altitude,
	FANSATCUplinkMsgElementId_PR_uM7Time,
	FANSATCUplinkMsgElementId_PR_uM8Position,
	FANSATCUplinkMsgElementId_PR_uM9Time,
	FANSATCUplinkMsgElementId_PR_uM10Position,
	FANSATCUplinkMsgElementId_PR_uM11Time,
	FANSATCUplinkMsgElementId_PR_uM12Position,
	FANSATCUplinkMsgElementId_PR_uM13TimeAltitude,
	FANSATCUplinkMsgElementId_PR_uM14PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM15TimeAltitude,
	FANSATCUplinkMsgElementId_PR_uM16PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM17TimeAltitude,
	FANSATCUplinkMsgElementId_PR_uM18PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM19Altitude,
	FANSATCUplinkMsgElementId_PR_uM20Altitude,
	FANSATCUplinkMsgElementId_PR_uM21TimeAltitude,
	FANSATCUplinkMsgElementId_PR_uM22PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM23Altitude,
	FANSATCUplinkMsgElementId_PR_uM24TimeAltitude,
	FANSATCUplinkMsgElementId_PR_uM25PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM26AltitudeTime,
	FANSATCUplinkMsgElementId_PR_uM27AltitudePosition,
	FANSATCUplinkMsgElementId_PR_uM28AltitudeTime,
	FANSATCUplinkMsgElementId_PR_uM29AltitudePosition,
	FANSATCUplinkMsgElementId_PR_uM30AltitudeAltitude,
	FANSATCUplinkMsgElementId_PR_uM31AltitudeAltitude,
	FANSATCUplinkMsgElementId_PR_uM32AltitudeAltitude,
	FANSATCUplinkMsgElementId_PR_uM33Altitude,
	FANSATCUplinkMsgElementId_PR_uM34Altitude,
	FANSATCUplinkMsgElementId_PR_uM35Altitude,
	FANSATCUplinkMsgElementId_PR_uM36Altitude,
	FANSATCUplinkMsgElementId_PR_uM37Altitude,
	FANSATCUplinkMsgElementId_PR_uM38Altitude,
	FANSATCUplinkMsgElementId_PR_uM39Altitude,
	FANSATCUplinkMsgElementId_PR_uM40Altitude,
	FANSATCUplinkMsgElementId_PR_uM41Altitude,
	FANSATCUplinkMsgElementId_PR_uM42PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM43PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM44PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM45PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM46PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM47PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM48PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM49PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM50PositionAltitudeAltitude,
	FANSATCUplinkMsgElementId_PR_uM51PositionTime,
	FANSATCUplinkMsgElementId_PR_uM52PositionTime,
	FANSATCUplinkMsgElementId_PR_uM53PositionTime,
	FANSATCUplinkMsgElementId_PR_uM54PositionTimeTime,
	FANSATCUplinkMsgElementId_PR_uM55PositionSpeed,
	FANSATCUplinkMsgElementId_PR_uM56PositionSpeed,
	FANSATCUplinkMsgElementId_PR_uM57PositionSpeed,
	FANSATCUplinkMsgElementId_PR_uM58PositionTimeAltitude,
	FANSATCUplinkMsgElementId_PR_uM59PositionTimeAltitude,
	FANSATCUplinkMsgElementId_PR_uM60PositionTimeAltitude,
	FANSATCUplinkMsgElementId_PR_uM61PositionAltitudeSpeed,
	FANSATCUplinkMsgElementId_PR_uM62TimePositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM63TimePositionAltitudeSpeed,
	FANSATCUplinkMsgElementId_PR_uM64DistanceOffsetDirection,
	FANSATCUplinkMsgElementId_PR_uM65PositionDistanceOffsetDirection,
	FANSATCUplinkMsgElementId_PR_uM66TimeDistanceOffsetDirection,
	FANSATCUplinkMsgElementId_PR_uM67NULL,
	FANSATCUplinkMsgElementId_PR_uM68Position,
	FANSATCUplinkMsgElementId_PR_uM69Time,
	FANSATCUplinkMsgElementId_PR_uM70Position,
	FANSATCUplinkMsgElementId_PR_uM71Time,
	FANSATCUplinkMsgElementId_PR_uM72NULL,
	FANSATCUplinkMsgElementId_PR_uM73Predepartureclearance,
	FANSATCUplinkMsgElementId_PR_uM74Position,
	FANSATCUplinkMsgElementId_PR_uM75Position,
	FANSATCUplinkMsgElementId_PR_uM76TimePosition,
	FANSATCUplinkMsgElementId_PR_uM77PositionPosition,
	FANSATCUplinkMsgElementId_PR_uM78AltitudePosition,
	FANSATCUplinkMsgElementId_PR_uM79PositionRouteClearance,
	FANSATCUplinkMsgElementId_PR_uM80RouteClearance,
	FANSATCUplinkMsgElementId_PR_uM81ProcedureName,
	FANSATCUplinkMsgElementId_PR_uM82DistanceOffsetDirection,
	FANSATCUplinkMsgElementId_PR_uM83PositionRouteClearance,
	FANSATCUplinkMsgElementId_PR_uM84PositionProcedureName,
	FANSATCUplinkMsgElementId_PR_uM85RouteClearance,
	FANSATCUplinkMsgElementId_PR_uM86PositionRouteClearance,
	FANSATCUplinkMsgElementId_PR_uM87Position,
	FANSATCUplinkMsgElementId_PR_uM88PositionPosition,
	FANSATCUplinkMsgElementId_PR_uM89TimePosition,
	FANSATCUplinkMsgElementId_PR_uM90AltitudePosition,
	FANSATCUplinkMsgElementId_PR_uM91HoldClearance,
	FANSATCUplinkMsgElementId_PR_uM92PositionAltitude,
	FANSATCUplinkMsgElementId_PR_uM93Time,
	FANSATCUplinkMsgElementId_PR_uM94DirectionDegrees,
	FANSATCUplinkMsgElementId_PR_uM95DirectionDegrees,
	FANSATCUplinkMsgElementId_PR_uM96NULL,
	FANSATCUplinkMsgElementId_PR_uM97PositionDegrees,
	FANSATCUplinkMsgElementId_PR_uM98DirectionDegrees,
	FANSATCUplinkMsgElementId_PR_uM99ProcedureName,
	FANSATCUplinkMsgElementId_PR_uM100TimeSpeed,
	FANSATCUplinkMsgElementId_PR_uM101PositionSpeed,
	FANSATCUplinkMsgElementId_PR_uM102AltitudeSpeed,
	FANSATCUplinkMsgElementId_PR_uM103TimeSpeedSpeed,
	FANSATCUplinkMsgElementId_PR_uM104PositionSpeedSpeed,
	FANSATCUplinkMsgElementId_PR_uM105AltitudeSpeedSpeed,
	FANSATCUplinkMsgElementId_PR_uM106Speed,
	FANSATCUplinkMsgElementId_PR_uM107NULL,
	FANSATCUplinkMsgElementId_PR_uM108Speed,
	FANSATCUplinkMsgElementId_PR_uM109Speed,
	FANSATCUplinkMsgElementId_PR_uM110SpeedSpeed,
	FANSATCUplinkMsgElementId_PR_uM111Speed,
	FANSATCUplinkMsgElementId_PR_uM112Speed,
	FANSATCUplinkMsgElementId_PR_uM113Speed,
	FANSATCUplinkMsgElementId_PR_uM114Speed,
	FANSATCUplinkMsgElementId_PR_uM115Speed,
	FANSATCUplinkMsgElementId_PR_uM116NULL,
	FANSATCUplinkMsgElementId_PR_uM117ICAOunitnameFrequency,
	FANSATCUplinkMsgElementId_PR_uM118PositionICAOunitnameFrequency,
	FANSATCUplinkMsgElementId_PR_uM119TimeICAOunitnameFrequency,
	FANSATCUplinkMsgElementId_PR_uM120ICAOunitnameFrequency,
	FANSATCUplinkMsgElementId_PR_uM121PositionICAOunitnameFrequency,
	FANSATCUplinkMsgElementId_PR_uM122TimeICAOunitnameFrequency,
	FANSATCUplinkMsgElementId_PR_uM123BeaconCode,
	FANSATCUplinkMsgElementId_PR_uM124NULL,
	FANSATCUplinkMsgElementId_PR_uM125NULL,
	FANSATCUplinkMsgElementId_PR_uM126NULL,
	FANSATCUplinkMsgElementId_PR_uM127NULL,
	FANSATCUplinkMsgElementId_PR_uM128Altitude,
	FANSATCUplinkMsgElementId_PR_uM129Altitude,
	FANSATCUplinkMsgElementId_PR_uM130Position,
	FANSATCUplinkMsgElementId_PR_uM131NULL,
	FANSATCUplinkMsgElementId_PR_uM132NULL,
	FANSATCUplinkMsgElementId_PR_uM133NULL,
	FANSATCUplinkMsgElementId_PR_uM134NULL,
	FANSATCUplinkMsgElementId_PR_uM135NULL,
	FANSATCUplinkMsgElementId_PR_uM136NULL,
	FANSATCUplinkMsgElementId_PR_uM137NULL,
	FANSATCUplinkMsgElementId_PR_uM138NULL,
	FANSATCUplinkMsgElementId_PR_uM139NULL,
	FANSATCUplinkMsgElementId_PR_uM140NULL,
	FANSATCUplinkMsgElementId_PR_uM141NULL,
	FANSATCUplinkMsgElementId_PR_uM142NULL,
	FANSATCUplinkMsgElementId_PR_uM143NULL,
	FANSATCUplinkMsgElementId_PR_uM144NULL,
	FANSATCUplinkMsgElementId_PR_uM145NULL,
	FANSATCUplinkMsgElementId_PR_uM146NULL,
	FANSATCUplinkMsgElementId_PR_uM147NULL,
	FANSATCUplinkMsgElementId_PR_uM148Altitude,
	FANSATCUplinkMsgElementId_PR_uM149AltitudePosition,
	FANSATCUplinkMsgElementId_PR_uM150AltitudeTime,
	FANSATCUplinkMsgElementId_PR_uM151Speed,
	FANSATCUplinkMsgElementId_PR_uM152DistanceOffsetDirection,
	FANSATCUplinkMsgElementId_PR_uM153Altimeter,
	FANSATCUplinkMsgElementId_PR_uM154NULL,
	FANSATCUplinkMsgElementId_PR_uM155Position,
	FANSATCUplinkMsgElementId_PR_uM156NULL,
	FANSATCUplinkMsgElementId_PR_uM157Frequency,
	FANSATCUplinkMsgElementId_PR_uM158ATISCode,
	FANSATCUplinkMsgElementId_PR_uM159ErrorInformation,
	FANSATCUplinkMsgElementId_PR_uM160ICAOfacilitydesignation,
	FANSATCUplinkMsgElementId_PR_uM161NULL,
	FANSATCUplinkMsgElementId_PR_uM162NULL,
	FANSATCUplinkMsgElementId_PR_uM163ICAOfacilitydesignationTp4table,
	FANSATCUplinkMsgElementId_PR_uM164NULL,
	FANSATCUplinkMsgElementId_PR_uM165NULL,
	FANSATCUplinkMsgElementId_PR_uM166NULL,
	FANSATCUplinkMsgElementId_PR_uM167NULL,
	FANSATCUplinkMsgElementId_PR_uM168NULL,
	FANSATCUplinkMsgElementId_PR_uM169FreeText,
	FANSATCUplinkMsgElementId_PR_uM170FreeText,
	FANSATCUplinkMsgElementId_PR_uM171VerticalRate,
	FANSATCUplinkMsgElementId_PR_uM172VerticalRate,
	FANSATCUplinkMsgElementId_PR_uM173VerticalRate,
	FANSATCUplinkMsgElementId_PR_uM174VerticalRate,
	FANSATCUplinkMsgElementId_PR_uM175Altitude,
	FANSATCUplinkMsgElementId_PR_uM176NULL,
	FANSATCUplinkMsgElementId_PR_uM177NULL,
	FANSATCUplinkMsgElementId_PR_uM178NULL,
	FANSATCUplinkMsgElementId_PR_uM179NULL,
	FANSATCUplinkMsgElementId_PR_uM180AltitudeAltitude,
	FANSATCUplinkMsgElementId_PR_uM181ToFromPosition,
	FANSATCUplinkMsgElementId_PR_uM182NULL
} FANSATCUplinkMsgElementId_PR;

/* FANSATCUplinkMsgElementId */
typedef struct FANSATCUplinkMsgElementId {
	FANSATCUplinkMsgElementId_PR present;
	union FANSATCUplinkMsgElementId_u {
		NULL_t	 uM0NULL;
		NULL_t	 uM1NULL;
		NULL_t	 uM2NULL;
		NULL_t	 uM3NULL;
		NULL_t	 uM4NULL;
		NULL_t	 uM5NULL;
		FANSAltitude_t	 uM6Altitude;
		FANSTime_t	 uM7Time;
		FANSPosition_t	 uM8Position;
		FANSTime_t	 uM9Time;
		FANSPosition_t	 uM10Position;
		FANSTime_t	 uM11Time;
		FANSPosition_t	 uM12Position;
		FANSTimeAltitude_t	 uM13TimeAltitude;
		FANSPositionAltitude_t	 uM14PositionAltitude;
		FANSTimeAltitude_t	 uM15TimeAltitude;
		FANSPositionAltitude_t	 uM16PositionAltitude;
		FANSTimeAltitude_t	 uM17TimeAltitude;
		FANSPositionAltitude_t	 uM18PositionAltitude;
		FANSAltitude_t	 uM19Altitude;
		FANSAltitude_t	 uM20Altitude;
		FANSTimeAltitude_t	 uM21TimeAltitude;
		FANSPositionAltitude_t	 uM22PositionAltitude;
		FANSAltitude_t	 uM23Altitude;
		FANSTimeAltitude_t	 uM24TimeAltitude;
		FANSPositionAltitude_t	 uM25PositionAltitude;
		FANSAltitudeTime_t	 uM26AltitudeTime;
		FANSAltitudePosition_t	 uM27AltitudePosition;
		FANSAltitudeTime_t	 uM28AltitudeTime;
		FANSAltitudePosition_t	 uM29AltitudePosition;
		FANSAltitudeAltitude_t	 uM30AltitudeAltitude;
		FANSAltitudeAltitude_t	 uM31AltitudeAltitude;
		FANSAltitudeAltitude_t	 uM32AltitudeAltitude;
		FANSAltitude_t	 uM33Altitude;
		FANSAltitude_t	 uM34Altitude;
		FANSAltitude_t	 uM35Altitude;
		FANSAltitude_t	 uM36Altitude;
		FANSAltitude_t	 uM37Altitude;
		FANSAltitude_t	 uM38Altitude;
		FANSAltitude_t	 uM39Altitude;
		FANSAltitude_t	 uM40Altitude;
		FANSAltitude_t	 uM41Altitude;
		FANSPositionAltitude_t	 uM42PositionAltitude;
		FANSPositionAltitude_t	 uM43PositionAltitude;
		FANSPositionAltitude_t	 uM44PositionAltitude;
		FANSPositionAltitude_t	 uM45PositionAltitude;
		FANSPositionAltitude_t	 uM46PositionAltitude;
		FANSPositionAltitude_t	 uM47PositionAltitude;
		FANSPositionAltitude_t	 uM48PositionAltitude;
		FANSPositionAltitude_t	 uM49PositionAltitude;
		FANSPositionAltitudeAltitude_t	 uM50PositionAltitudeAltitude;
		FANSPositionTime_t	 uM51PositionTime;
		FANSPositionTime_t	 uM52PositionTime;
		FANSPositionTime_t	 uM53PositionTime;
		FANSPositionTimeTime_t	 uM54PositionTimeTime;
		FANSPositionSpeed_t	 uM55PositionSpeed;
		FANSPositionSpeed_t	 uM56PositionSpeed;
		FANSPositionSpeed_t	 uM57PositionSpeed;
		FANSPositionTimeAltitude_t	 uM58PositionTimeAltitude;
		FANSPositionTimeAltitude_t	 uM59PositionTimeAltitude;
		FANSPositionTimeAltitude_t	 uM60PositionTimeAltitude;
		FANSPositionAltitudeSpeed_t	 uM61PositionAltitudeSpeed;
		FANSTimePositionAltitude_t	 uM62TimePositionAltitude;
		FANSTimePositionAltitudeSpeed_t	 uM63TimePositionAltitudeSpeed;
		FANSDistanceOffsetDirection_t	 uM64DistanceOffsetDirection;
		FANSPositionDistanceOffsetDirection_t	 uM65PositionDistanceOffsetDirection;
		FANSTimeDistanceOffsetDirection_t	 uM66TimeDistanceOffsetDirection;
		NULL_t	 uM67NULL;
		FANSPosition_t	 uM68Position;
		FANSTime_t	 uM69Time;
		FANSPosition_t	 uM70Position;
		FANSTime_t	 uM71Time;
		NULL_t	 uM72NULL;
		FANSPredepartureClearance_t	 uM73Predepartureclearance;
		FANSPosition_t	 uM74Position;
		FANSPosition_t	 uM75Position;
		FANSTimePosition_t	 uM76TimePosition;
		FANSPositionPosition_t	 uM77PositionPosition;
		FANSAltitudePosition_t	 uM78AltitudePosition;
		FANSPositionRouteClearance_t	 uM79PositionRouteClearance;
		FANSRouteClearance_t	 uM80RouteClearance;
		FANSProcedureName_t	 uM81ProcedureName;
		FANSDistanceOffsetDirection_t	 uM82DistanceOffsetDirection;
		FANSPositionRouteClearance_t	 uM83PositionRouteClearance;
		FANSPositionProcedureName_t	 uM84PositionProcedureName;
		FANSRouteClearance_t	 uM85RouteClearance;
		FANSPositionRouteClearance_t	 uM86PositionRouteClearance;
		FANSPosition_t	 uM87Position;
		FANSPositionPosition_t	 uM88PositionPosition;
		FANSTimePosition_t	 uM89TimePosition;
		FANSAltitudePosition_t	 uM90AltitudePosition;
		FANSHoldClearance_t	 uM91HoldClearance;
		FANSPositionAltitude_t	 uM92PositionAltitude;
		FANSTime_t	 uM93Time;
		FANSDirectionDegrees_t	 uM94DirectionDegrees;
		FANSDirectionDegrees_t	 uM95DirectionDegrees;
		NULL_t	 uM96NULL;
		FANSPositionDegrees_t	 uM97PositionDegrees;
		FANSDirectionDegrees_t	 uM98DirectionDegrees;
		FANSProcedureName_t	 uM99ProcedureName;
		FANSTimeSpeed_t	 uM100TimeSpeed;
		FANSPositionSpeed_t	 uM101PositionSpeed;
		FANSAltitudeSpeed_t	 uM102AltitudeSpeed;
		FANSTimeSpeedSpeed_t	 uM103TimeSpeedSpeed;
		FANSPositionSpeedSpeed_t	 uM104PositionSpeedSpeed;
		FANSAltitudeSpeedSpeed_t	 uM105AltitudeSpeedSpeed;
		FANSSpeed_t	 uM106Speed;
		NULL_t	 uM107NULL;
		FANSSpeed_t	 uM108Speed;
		FANSSpeed_t	 uM109Speed;
		FANSSpeedSpeed_t	 uM110SpeedSpeed;
		FANSSpeed_t	 uM111Speed;
		FANSSpeed_t	 uM112Speed;
		FANSSpeed_t	 uM113Speed;
		FANSSpeed_t	 uM114Speed;
		FANSSpeed_t	 uM115Speed;
		NULL_t	 uM116NULL;
		FANSICAOUnitNameFrequency_t	 uM117ICAOunitnameFrequency;
		FANSPositionICAOUnitNameFrequency_t	 uM118PositionICAOunitnameFrequency;
		FANSTimeICAOunitnameFrequency_t	 uM119TimeICAOunitnameFrequency;
		FANSICAOUnitNameFrequency_t	 uM120ICAOunitnameFrequency;
		FANSPositionICAOUnitNameFrequency_t	 uM121PositionICAOunitnameFrequency;
		FANSTimeICAOunitnameFrequency_t	 uM122TimeICAOunitnameFrequency;
		FANSBeaconCode_t	 uM123BeaconCode;
		NULL_t	 uM124NULL;
		NULL_t	 uM125NULL;
		NULL_t	 uM126NULL;
		NULL_t	 uM127NULL;
		FANSAltitude_t	 uM128Altitude;
		FANSAltitude_t	 uM129Altitude;
		FANSPosition_t	 uM130Position;
		NULL_t	 uM131NULL;
		NULL_t	 uM132NULL;
		NULL_t	 uM133NULL;
		NULL_t	 uM134NULL;
		NULL_t	 uM135NULL;
		NULL_t	 uM136NULL;
		NULL_t	 uM137NULL;
		NULL_t	 uM138NULL;
		NULL_t	 uM139NULL;
		NULL_t	 uM140NULL;
		NULL_t	 uM141NULL;
		NULL_t	 uM142NULL;
		NULL_t	 uM143NULL;
		NULL_t	 uM144NULL;
		NULL_t	 uM145NULL;
		NULL_t	 uM146NULL;
		NULL_t	 uM147NULL;
		FANSAltitude_t	 uM148Altitude;
		FANSAltitudePosition_t	 uM149AltitudePosition;
		FANSAltitudeTime_t	 uM150AltitudeTime;
		FANSSpeed_t	 uM151Speed;
		FANSDistanceOffsetDirection_t	 uM152DistanceOffsetDirection;
		FANSAltimeter_t	 uM153Altimeter;
		NULL_t	 uM154NULL;
		FANSPosition_t	 uM155Position;
		NULL_t	 uM156NULL;
		FANSFrequency_t	 uM157Frequency;
		FANSATISCode_t	 uM158ATISCode;
		FANSErrorInformation_t	 uM159ErrorInformation;
		FANSICAOfacilityDesignation_t	 uM160ICAOfacilitydesignation;
		NULL_t	 uM161NULL;
		NULL_t	 uM162NULL;
		FANSICAOFacilityDesignationTp4Table_t	 uM163ICAOfacilitydesignationTp4table;
		NULL_t	 uM164NULL;
		NULL_t	 uM165NULL;
		NULL_t	 uM166NULL;
		NULL_t	 uM167NULL;
		NULL_t	 uM168NULL;
		FANSFreeText_t	 uM169FreeText;
		FANSFreeText_t	 uM170FreeText;
		FANSVerticalRate_t	 uM171VerticalRate;
		FANSVerticalRate_t	 uM172VerticalRate;
		FANSVerticalRate_t	 uM173VerticalRate;
		FANSVerticalRate_t	 uM174VerticalRate;
		FANSAltitude_t	 uM175Altitude;
		NULL_t	 uM176NULL;
		NULL_t	 uM177NULL;
		NULL_t	 uM178NULL;
		NULL_t	 uM179NULL;
		FANSAltitudeAltitude_t	 uM180AltitudeAltitude;
		FANSToFromPosition_t	 uM181ToFromPosition;
		NULL_t	 uM182NULL;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSATCUplinkMsgElementId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSATCUplinkMsgElementId;
extern asn_CHOICE_specifics_t asn_SPC_FANSATCUplinkMsgElementId_specs_1;
extern asn_TYPE_member_t asn_MBR_FANSATCUplinkMsgElementId_1[183];
extern asn_per_constraints_t asn_PER_type_FANSATCUplinkMsgElementId_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSATCUplinkMsgElementId_H_ */
#include "asn_internal.h"

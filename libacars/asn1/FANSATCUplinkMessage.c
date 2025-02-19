/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSATCUplinkMessage.h"

static asn_TYPE_member_t asn_MBR_FANSATCUplinkMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSATCUplinkMessage, aTCMessageheader),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSATCMessageHeader,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"aTCMessageheader"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSATCUplinkMessage, aTCuplinkmsgelementId),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSATCUplinkMsgElementId,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"aTCuplinkmsgelementId"
		},
	{ ATF_POINTER, 1, offsetof(struct FANSATCUplinkMessage, aTCuplinkmsgelementid_seqOf),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSATCUplinkMsgElementIdSequence,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"aTCuplinkmsgelementid-seqOf"
		},
};
static const int asn_MAP_FANSATCUplinkMessage_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_FANSATCUplinkMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSATCUplinkMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* aTCMessageheader */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 0 }, /* aTCuplinkmsgelementid-seqOf */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* uM0NULL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uM1NULL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* uM2NULL */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 0 }, /* uM3NULL */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* uM4NULL */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 }, /* uM5NULL */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 1, 0, 0 }, /* uM6Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 1, 0, 0 }, /* uM7Time */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 1, 0, 0 }, /* uM8Position */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 1, 0, 0 }, /* uM9Time */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 1, 0, 0 }, /* uM10Position */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 1, 0, 0 }, /* uM11Time */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 1, 0, 0 }, /* uM12Position */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 1, 0, 0 }, /* uM13TimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 1, 0, 0 }, /* uM14PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 1, 0, 0 }, /* uM15TimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 1, 0, 0 }, /* uM16PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 1, 0, 0 }, /* uM17TimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 1, 0, 0 }, /* uM18PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 1, 0, 0 }, /* uM19Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 1, 0, 0 }, /* uM20Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 1, 0, 0 }, /* uM21TimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 1, 0, 0 }, /* uM22PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 1, 0, 0 }, /* uM23Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 1, 0, 0 }, /* uM24TimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 1, 0, 0 }, /* uM25PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 1, 0, 0 }, /* uM26AltitudeTime */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 1, 0, 0 }, /* uM27AltitudePosition */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 1, 0, 0 }, /* uM28AltitudeTime */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 1, 0, 0 }, /* uM29AltitudePosition */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 1, 0, 0 }, /* uM30AltitudeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 1, 0, 0 }, /* uM31AltitudeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 1, 0, 0 }, /* uM32AltitudeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 1, 0, 0 }, /* uM33Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 1, 0, 0 }, /* uM34Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 1, 0, 0 }, /* uM35Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 1, 0, 0 }, /* uM36Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (37 << 2)), 1, 0, 0 }, /* uM37Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (38 << 2)), 1, 0, 0 }, /* uM38Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (39 << 2)), 1, 0, 0 }, /* uM39Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (40 << 2)), 1, 0, 0 }, /* uM40Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (41 << 2)), 1, 0, 0 }, /* uM41Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (42 << 2)), 1, 0, 0 }, /* uM42PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (43 << 2)), 1, 0, 0 }, /* uM43PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (44 << 2)), 1, 0, 0 }, /* uM44PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (45 << 2)), 1, 0, 0 }, /* uM45PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (46 << 2)), 1, 0, 0 }, /* uM46PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (47 << 2)), 1, 0, 0 }, /* uM47PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (48 << 2)), 1, 0, 0 }, /* uM48PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (49 << 2)), 1, 0, 0 }, /* uM49PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (50 << 2)), 1, 0, 0 }, /* uM50PositionAltitudeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (51 << 2)), 1, 0, 0 }, /* uM51PositionTime */
    { (ASN_TAG_CLASS_CONTEXT | (52 << 2)), 1, 0, 0 }, /* uM52PositionTime */
    { (ASN_TAG_CLASS_CONTEXT | (53 << 2)), 1, 0, 0 }, /* uM53PositionTime */
    { (ASN_TAG_CLASS_CONTEXT | (54 << 2)), 1, 0, 0 }, /* uM54PositionTimeTime */
    { (ASN_TAG_CLASS_CONTEXT | (55 << 2)), 1, 0, 0 }, /* uM55PositionSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (56 << 2)), 1, 0, 0 }, /* uM56PositionSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (57 << 2)), 1, 0, 0 }, /* uM57PositionSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (58 << 2)), 1, 0, 0 }, /* uM58PositionTimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (59 << 2)), 1, 0, 0 }, /* uM59PositionTimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (60 << 2)), 1, 0, 0 }, /* uM60PositionTimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (61 << 2)), 1, 0, 0 }, /* uM61PositionAltitudeSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (62 << 2)), 1, 0, 0 }, /* uM62TimePositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (63 << 2)), 1, 0, 0 }, /* uM63TimePositionAltitudeSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (64 << 2)), 1, 0, 0 }, /* uM64DistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (65 << 2)), 1, 0, 0 }, /* uM65PositionDistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (66 << 2)), 1, 0, 0 }, /* uM66TimeDistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (67 << 2)), 1, 0, 0 }, /* uM67NULL */
    { (ASN_TAG_CLASS_CONTEXT | (68 << 2)), 1, 0, 0 }, /* uM68Position */
    { (ASN_TAG_CLASS_CONTEXT | (69 << 2)), 1, 0, 0 }, /* uM69Time */
    { (ASN_TAG_CLASS_CONTEXT | (70 << 2)), 1, 0, 0 }, /* uM70Position */
    { (ASN_TAG_CLASS_CONTEXT | (71 << 2)), 1, 0, 0 }, /* uM71Time */
    { (ASN_TAG_CLASS_CONTEXT | (72 << 2)), 1, 0, 0 }, /* uM72NULL */
    { (ASN_TAG_CLASS_CONTEXT | (73 << 2)), 1, 0, 0 }, /* uM73Predepartureclearance */
    { (ASN_TAG_CLASS_CONTEXT | (74 << 2)), 1, 0, 0 }, /* uM74Position */
    { (ASN_TAG_CLASS_CONTEXT | (75 << 2)), 1, 0, 0 }, /* uM75Position */
    { (ASN_TAG_CLASS_CONTEXT | (76 << 2)), 1, 0, 0 }, /* uM76TimePosition */
    { (ASN_TAG_CLASS_CONTEXT | (77 << 2)), 1, 0, 0 }, /* uM77PositionPosition */
    { (ASN_TAG_CLASS_CONTEXT | (78 << 2)), 1, 0, 0 }, /* uM78AltitudePosition */
    { (ASN_TAG_CLASS_CONTEXT | (79 << 2)), 1, 0, 0 }, /* uM79PositionRouteClearance */
    { (ASN_TAG_CLASS_CONTEXT | (80 << 2)), 1, 0, 0 }, /* uM80RouteClearance */
    { (ASN_TAG_CLASS_CONTEXT | (81 << 2)), 1, 0, 0 }, /* uM81ProcedureName */
    { (ASN_TAG_CLASS_CONTEXT | (82 << 2)), 1, 0, 0 }, /* uM82DistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (83 << 2)), 1, 0, 0 }, /* uM83PositionRouteClearance */
    { (ASN_TAG_CLASS_CONTEXT | (84 << 2)), 1, 0, 0 }, /* uM84PositionProcedureName */
    { (ASN_TAG_CLASS_CONTEXT | (85 << 2)), 1, 0, 0 }, /* uM85RouteClearance */
    { (ASN_TAG_CLASS_CONTEXT | (86 << 2)), 1, 0, 0 }, /* uM86PositionRouteClearance */
    { (ASN_TAG_CLASS_CONTEXT | (87 << 2)), 1, 0, 0 }, /* uM87Position */
    { (ASN_TAG_CLASS_CONTEXT | (88 << 2)), 1, 0, 0 }, /* uM88PositionPosition */
    { (ASN_TAG_CLASS_CONTEXT | (89 << 2)), 1, 0, 0 }, /* uM89TimePosition */
    { (ASN_TAG_CLASS_CONTEXT | (90 << 2)), 1, 0, 0 }, /* uM90AltitudePosition */
    { (ASN_TAG_CLASS_CONTEXT | (91 << 2)), 1, 0, 0 }, /* uM91HoldClearance */
    { (ASN_TAG_CLASS_CONTEXT | (92 << 2)), 1, 0, 0 }, /* uM92PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (93 << 2)), 1, 0, 0 }, /* uM93Time */
    { (ASN_TAG_CLASS_CONTEXT | (94 << 2)), 1, 0, 0 }, /* uM94DirectionDegrees */
    { (ASN_TAG_CLASS_CONTEXT | (95 << 2)), 1, 0, 0 }, /* uM95DirectionDegrees */
    { (ASN_TAG_CLASS_CONTEXT | (96 << 2)), 1, 0, 0 }, /* uM96NULL */
    { (ASN_TAG_CLASS_CONTEXT | (97 << 2)), 1, 0, 0 }, /* uM97PositionDegrees */
    { (ASN_TAG_CLASS_CONTEXT | (98 << 2)), 1, 0, 0 }, /* uM98DirectionDegrees */
    { (ASN_TAG_CLASS_CONTEXT | (99 << 2)), 1, 0, 0 }, /* uM99ProcedureName */
    { (ASN_TAG_CLASS_CONTEXT | (100 << 2)), 1, 0, 0 }, /* uM100TimeSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (101 << 2)), 1, 0, 0 }, /* uM101PositionSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (102 << 2)), 1, 0, 0 }, /* uM102AltitudeSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (103 << 2)), 1, 0, 0 }, /* uM103TimeSpeedSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (104 << 2)), 1, 0, 0 }, /* uM104PositionSpeedSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (105 << 2)), 1, 0, 0 }, /* uM105AltitudeSpeedSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (106 << 2)), 1, 0, 0 }, /* uM106Speed */
    { (ASN_TAG_CLASS_CONTEXT | (107 << 2)), 1, 0, 0 }, /* uM107NULL */
    { (ASN_TAG_CLASS_CONTEXT | (108 << 2)), 1, 0, 0 }, /* uM108Speed */
    { (ASN_TAG_CLASS_CONTEXT | (109 << 2)), 1, 0, 0 }, /* uM109Speed */
    { (ASN_TAG_CLASS_CONTEXT | (110 << 2)), 1, 0, 0 }, /* uM110SpeedSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (111 << 2)), 1, 0, 0 }, /* uM111Speed */
    { (ASN_TAG_CLASS_CONTEXT | (112 << 2)), 1, 0, 0 }, /* uM112Speed */
    { (ASN_TAG_CLASS_CONTEXT | (113 << 2)), 1, 0, 0 }, /* uM113Speed */
    { (ASN_TAG_CLASS_CONTEXT | (114 << 2)), 1, 0, 0 }, /* uM114Speed */
    { (ASN_TAG_CLASS_CONTEXT | (115 << 2)), 1, 0, 0 }, /* uM115Speed */
    { (ASN_TAG_CLASS_CONTEXT | (116 << 2)), 1, 0, 0 }, /* uM116NULL */
    { (ASN_TAG_CLASS_CONTEXT | (117 << 2)), 1, 0, 0 }, /* uM117ICAOunitnameFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (118 << 2)), 1, 0, 0 }, /* uM118PositionICAOunitnameFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (119 << 2)), 1, 0, 0 }, /* uM119TimeICAOunitnameFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (120 << 2)), 1, 0, 0 }, /* uM120ICAOunitnameFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (121 << 2)), 1, 0, 0 }, /* uM121PositionICAOunitnameFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (122 << 2)), 1, 0, 0 }, /* uM122TimeICAOunitnameFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (123 << 2)), 1, 0, 0 }, /* uM123BeaconCode */
    { (ASN_TAG_CLASS_CONTEXT | (124 << 2)), 1, 0, 0 }, /* uM124NULL */
    { (ASN_TAG_CLASS_CONTEXT | (125 << 2)), 1, 0, 0 }, /* uM125NULL */
    { (ASN_TAG_CLASS_CONTEXT | (126 << 2)), 1, 0, 0 }, /* uM126NULL */
    { (ASN_TAG_CLASS_CONTEXT | (127 << 2)), 1, 0, 0 }, /* uM127NULL */
    { (ASN_TAG_CLASS_CONTEXT | (128 << 2)), 1, 0, 0 }, /* uM128Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (129 << 2)), 1, 0, 0 }, /* uM129Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (130 << 2)), 1, 0, 0 }, /* uM130Position */
    { (ASN_TAG_CLASS_CONTEXT | (131 << 2)), 1, 0, 0 }, /* uM131NULL */
    { (ASN_TAG_CLASS_CONTEXT | (132 << 2)), 1, 0, 0 }, /* uM132NULL */
    { (ASN_TAG_CLASS_CONTEXT | (133 << 2)), 1, 0, 0 }, /* uM133NULL */
    { (ASN_TAG_CLASS_CONTEXT | (134 << 2)), 1, 0, 0 }, /* uM134NULL */
    { (ASN_TAG_CLASS_CONTEXT | (135 << 2)), 1, 0, 0 }, /* uM135NULL */
    { (ASN_TAG_CLASS_CONTEXT | (136 << 2)), 1, 0, 0 }, /* uM136NULL */
    { (ASN_TAG_CLASS_CONTEXT | (137 << 2)), 1, 0, 0 }, /* uM137NULL */
    { (ASN_TAG_CLASS_CONTEXT | (138 << 2)), 1, 0, 0 }, /* uM138NULL */
    { (ASN_TAG_CLASS_CONTEXT | (139 << 2)), 1, 0, 0 }, /* uM139NULL */
    { (ASN_TAG_CLASS_CONTEXT | (140 << 2)), 1, 0, 0 }, /* uM140NULL */
    { (ASN_TAG_CLASS_CONTEXT | (141 << 2)), 1, 0, 0 }, /* uM141NULL */
    { (ASN_TAG_CLASS_CONTEXT | (142 << 2)), 1, 0, 0 }, /* uM142NULL */
    { (ASN_TAG_CLASS_CONTEXT | (143 << 2)), 1, 0, 0 }, /* uM143NULL */
    { (ASN_TAG_CLASS_CONTEXT | (144 << 2)), 1, 0, 0 }, /* uM144NULL */
    { (ASN_TAG_CLASS_CONTEXT | (145 << 2)), 1, 0, 0 }, /* uM145NULL */
    { (ASN_TAG_CLASS_CONTEXT | (146 << 2)), 1, 0, 0 }, /* uM146NULL */
    { (ASN_TAG_CLASS_CONTEXT | (147 << 2)), 1, 0, 0 }, /* uM147NULL */
    { (ASN_TAG_CLASS_CONTEXT | (148 << 2)), 1, 0, 0 }, /* uM148Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (149 << 2)), 1, 0, 0 }, /* uM149AltitudePosition */
    { (ASN_TAG_CLASS_CONTEXT | (150 << 2)), 1, 0, 0 }, /* uM150AltitudeTime */
    { (ASN_TAG_CLASS_CONTEXT | (151 << 2)), 1, 0, 0 }, /* uM151Speed */
    { (ASN_TAG_CLASS_CONTEXT | (152 << 2)), 1, 0, 0 }, /* uM152DistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (153 << 2)), 1, 0, 0 }, /* uM153Altimeter */
    { (ASN_TAG_CLASS_CONTEXT | (154 << 2)), 1, 0, 0 }, /* uM154NULL */
    { (ASN_TAG_CLASS_CONTEXT | (155 << 2)), 1, 0, 0 }, /* uM155Position */
    { (ASN_TAG_CLASS_CONTEXT | (156 << 2)), 1, 0, 0 }, /* uM156NULL */
    { (ASN_TAG_CLASS_CONTEXT | (157 << 2)), 1, 0, 0 }, /* uM157Frequency */
    { (ASN_TAG_CLASS_CONTEXT | (158 << 2)), 1, 0, 0 }, /* uM158ATISCode */
    { (ASN_TAG_CLASS_CONTEXT | (159 << 2)), 1, 0, 0 }, /* uM159ErrorInformation */
    { (ASN_TAG_CLASS_CONTEXT | (160 << 2)), 1, 0, 0 }, /* uM160ICAOfacilitydesignation */
    { (ASN_TAG_CLASS_CONTEXT | (161 << 2)), 1, 0, 0 }, /* uM161NULL */
    { (ASN_TAG_CLASS_CONTEXT | (162 << 2)), 1, 0, 0 }, /* uM162NULL */
    { (ASN_TAG_CLASS_CONTEXT | (163 << 2)), 1, 0, 0 }, /* uM163ICAOfacilitydesignationTp4table */
    { (ASN_TAG_CLASS_CONTEXT | (164 << 2)), 1, 0, 0 }, /* uM164NULL */
    { (ASN_TAG_CLASS_CONTEXT | (165 << 2)), 1, 0, 0 }, /* uM165NULL */
    { (ASN_TAG_CLASS_CONTEXT | (166 << 2)), 1, 0, 0 }, /* uM166NULL */
    { (ASN_TAG_CLASS_CONTEXT | (167 << 2)), 1, 0, 0 }, /* uM167NULL */
    { (ASN_TAG_CLASS_CONTEXT | (168 << 2)), 1, 0, 0 }, /* uM168NULL */
    { (ASN_TAG_CLASS_CONTEXT | (169 << 2)), 1, 0, 0 }, /* uM169FreeText */
    { (ASN_TAG_CLASS_CONTEXT | (170 << 2)), 1, 0, 0 }, /* uM170FreeText */
    { (ASN_TAG_CLASS_CONTEXT | (171 << 2)), 1, 0, 0 }, /* uM171VerticalRate */
    { (ASN_TAG_CLASS_CONTEXT | (172 << 2)), 1, 0, 0 }, /* uM172VerticalRate */
    { (ASN_TAG_CLASS_CONTEXT | (173 << 2)), 1, 0, 0 }, /* uM173VerticalRate */
    { (ASN_TAG_CLASS_CONTEXT | (174 << 2)), 1, 0, 0 }, /* uM174VerticalRate */
    { (ASN_TAG_CLASS_CONTEXT | (175 << 2)), 1, 0, 0 }, /* uM175Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (176 << 2)), 1, 0, 0 }, /* uM176NULL */
    { (ASN_TAG_CLASS_CONTEXT | (177 << 2)), 1, 0, 0 }, /* uM177NULL */
    { (ASN_TAG_CLASS_CONTEXT | (178 << 2)), 1, 0, 0 }, /* uM178NULL */
    { (ASN_TAG_CLASS_CONTEXT | (179 << 2)), 1, 0, 0 }, /* uM179NULL */
    { (ASN_TAG_CLASS_CONTEXT | (180 << 2)), 1, 0, 0 }, /* uM180AltitudeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (181 << 2)), 1, 0, 0 }, /* uM181ToFromPosition */
    { (ASN_TAG_CLASS_CONTEXT | (182 << 2)), 1, 0, 0 } /* uM182NULL */
};
static asn_SEQUENCE_specifics_t asn_SPC_FANSATCUplinkMessage_specs_1 = {
	sizeof(struct FANSATCUplinkMessage),
	offsetof(struct FANSATCUplinkMessage, _asn_ctx),
	asn_MAP_FANSATCUplinkMessage_tag2el_1,
	185,	/* Count of tags in the map */
	asn_MAP_FANSATCUplinkMessage_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSATCUplinkMessage = {
	"FANSATCUplinkMessage",
	"FANSATCUplinkMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSATCUplinkMessage_tags_1,
	sizeof(asn_DEF_FANSATCUplinkMessage_tags_1)
		/sizeof(asn_DEF_FANSATCUplinkMessage_tags_1[0]), /* 1 */
	asn_DEF_FANSATCUplinkMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSATCUplinkMessage_tags_1)
		/sizeof(asn_DEF_FANSATCUplinkMessage_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSATCUplinkMessage_1,
	3,	/* Elements count */
	&asn_SPC_FANSATCUplinkMessage_specs_1	/* Additional specs */
};


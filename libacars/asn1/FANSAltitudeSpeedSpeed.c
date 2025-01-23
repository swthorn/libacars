/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#include "FANSAltitudeSpeedSpeed.h"

asn_TYPE_member_t asn_MBR_FANSAltitudeSpeedSpeed_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitudeSpeedSpeed, altitude),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSAltitude,
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
		"altitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitudeSpeedSpeed, speed_seqOf),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSSpeedSpeed,
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
		"speed-seqOf"
		},
};
static const ber_tlv_tag_t asn_DEF_FANSAltitudeSpeedSpeed_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSAltitudeSpeedSpeed_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* speed-seqOf */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* altitudeQNH */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* altitudeQNHMeters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 }, /* altitudeQFE */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* altitudeQFEMeters */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 0, 0, 0 }, /* altitudeGNSSFeet */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 0, 0, 0 }, /* altitudeGNSSMeters */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 0, 0, 0 }, /* altitudeFlightLevel */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 0, 0, 0 } /* altitudeFlightLevelMetric */
};
asn_SEQUENCE_specifics_t asn_SPC_FANSAltitudeSpeedSpeed_specs_1 = {
	sizeof(struct FANSAltitudeSpeedSpeed),
	offsetof(struct FANSAltitudeSpeedSpeed, _asn_ctx),
	asn_MAP_FANSAltitudeSpeedSpeed_tag2el_1,
	9,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSAltitudeSpeedSpeed = {
	"FANSAltitudeSpeedSpeed",
	"FANSAltitudeSpeedSpeed",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSAltitudeSpeedSpeed_tags_1,
	sizeof(asn_DEF_FANSAltitudeSpeedSpeed_tags_1)
		/sizeof(asn_DEF_FANSAltitudeSpeedSpeed_tags_1[0]), /* 1 */
	asn_DEF_FANSAltitudeSpeedSpeed_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSAltitudeSpeedSpeed_tags_1)
		/sizeof(asn_DEF_FANSAltitudeSpeedSpeed_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSAltitudeSpeedSpeed_1,
	2,	/* Elements count */
	&asn_SPC_FANSAltitudeSpeedSpeed_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSHoldClearance.h"

asn_TYPE_member_t asn_MBR_FANSHoldClearance_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSHoldClearance, position),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSPosition,
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
		"position"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSHoldClearance, altitude),
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
	{ ATF_NOFLAGS, 0, offsetof(struct FANSHoldClearance, degrees),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSDegrees,
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
		"degrees"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSHoldClearance, direction),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_FANSDirection,
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
		"direction"
		},
	{ ATF_POINTER, 1, offsetof(struct FANSHoldClearance, legType),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSLegType,
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
		"legType"
		},
};
static const int asn_MAP_FANSHoldClearance_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_FANSHoldClearance_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSHoldClearance_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 3, 0, 0 }, /* direction */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 3 }, /* fixName */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, -1, 2 }, /* altitudeQNH */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, -2, 1 }, /* degreesMagnetic */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 4, -3, 0 }, /* legDistance */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 3 }, /* navaid */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, -1, 2 }, /* altitudeQNHMeters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, -2, 1 }, /* degreesTrue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 4, -3, 0 }, /* legTime */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 1 }, /* airport */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, -1, 0 }, /* altitudeQFE */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 1 }, /* latitudeLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, -1, 0 }, /* altitudeQFEMeters */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 0, 0, 1 }, /* placeBearingDistance */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, -1, 0 }, /* altitudeGNSSFeet */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 }, /* altitudeGNSSMeters */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 1, 0, 0 }, /* altitudeFlightLevel */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 1, 0, 0 } /* altitudeFlightLevelMetric */
};
asn_SEQUENCE_specifics_t asn_SPC_FANSHoldClearance_specs_1 = {
	sizeof(struct FANSHoldClearance),
	offsetof(struct FANSHoldClearance, _asn_ctx),
	asn_MAP_FANSHoldClearance_tag2el_1,
	18,	/* Count of tags in the map */
	asn_MAP_FANSHoldClearance_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSHoldClearance = {
	"FANSHoldClearance",
	"FANSHoldClearance",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSHoldClearance_tags_1,
	sizeof(asn_DEF_FANSHoldClearance_tags_1)
		/sizeof(asn_DEF_FANSHoldClearance_tags_1[0]), /* 1 */
	asn_DEF_FANSHoldClearance_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSHoldClearance_tags_1)
		/sizeof(asn_DEF_FANSHoldClearance_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSHoldClearance_1,
	5,	/* Elements count */
	&asn_SPC_FANSHoldClearance_specs_1	/* Additional specs */
};


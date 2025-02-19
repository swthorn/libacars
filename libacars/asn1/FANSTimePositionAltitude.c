/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSTimePositionAltitude.h"

asn_TYPE_member_t asn_MBR_FANSTimePositionAltitude_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSTimePositionAltitude, time),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSTime,
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
		"time"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSTimePositionAltitude, position),
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
	{ ATF_NOFLAGS, 0, offsetof(struct FANSTimePositionAltitude, altitude),
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
};
static const ber_tlv_tag_t asn_DEF_FANSTimePositionAltitude_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSTimePositionAltitude_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* time */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 1 }, /* fixName */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, -1, 0 }, /* altitudeQNH */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 1 }, /* navaid */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, -1, 0 }, /* altitudeQNHMeters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 1 }, /* airport */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, -1, 0 }, /* altitudeQFE */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 1 }, /* latitudeLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, -1, 0 }, /* altitudeQFEMeters */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 1 }, /* placeBearingDistance */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 2, -1, 0 }, /* altitudeGNSSFeet */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 2, 0, 0 }, /* altitudeGNSSMeters */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 2, 0, 0 }, /* altitudeFlightLevel */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 2, 0, 0 } /* altitudeFlightLevelMetric */
};
asn_SEQUENCE_specifics_t asn_SPC_FANSTimePositionAltitude_specs_1 = {
	sizeof(struct FANSTimePositionAltitude),
	offsetof(struct FANSTimePositionAltitude, _asn_ctx),
	asn_MAP_FANSTimePositionAltitude_tag2el_1,
	14,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSTimePositionAltitude = {
	"FANSTimePositionAltitude",
	"FANSTimePositionAltitude",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSTimePositionAltitude_tags_1,
	sizeof(asn_DEF_FANSTimePositionAltitude_tags_1)
		/sizeof(asn_DEF_FANSTimePositionAltitude_tags_1[0]), /* 1 */
	asn_DEF_FANSTimePositionAltitude_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSTimePositionAltitude_tags_1)
		/sizeof(asn_DEF_FANSTimePositionAltitude_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSTimePositionAltitude_1,
	3,	/* Elements count */
	&asn_SPC_FANSTimePositionAltitude_specs_1	/* Additional specs */
};


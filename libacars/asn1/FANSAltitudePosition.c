/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSAltitudePosition.h"

asn_TYPE_member_t asn_MBR_FANSAltitudePosition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitudePosition, altitude),
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
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltitudePosition, position),
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
};
static const ber_tlv_tag_t asn_DEF_FANSAltitudePosition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSAltitudePosition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 1 }, /* altitudeQNH */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, -1, 0 }, /* fixName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 1 }, /* altitudeQNHMeters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, -1, 0 }, /* navaid */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 1 }, /* altitudeQFE */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, -1, 0 }, /* airport */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 1 }, /* altitudeQFEMeters */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, -1, 0 }, /* latitudeLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 0, 0, 1 }, /* altitudeGNSSFeet */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, -1, 0 }, /* placeBearingDistance */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 0, 0, 0 }, /* altitudeGNSSMeters */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 0, 0, 0 }, /* altitudeFlightLevel */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 0, 0, 0 } /* altitudeFlightLevelMetric */
};
asn_SEQUENCE_specifics_t asn_SPC_FANSAltitudePosition_specs_1 = {
	sizeof(struct FANSAltitudePosition),
	offsetof(struct FANSAltitudePosition, _asn_ctx),
	asn_MAP_FANSAltitudePosition_tag2el_1,
	13,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSAltitudePosition = {
	"FANSAltitudePosition",
	"FANSAltitudePosition",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSAltitudePosition_tags_1,
	sizeof(asn_DEF_FANSAltitudePosition_tags_1)
		/sizeof(asn_DEF_FANSAltitudePosition_tags_1[0]), /* 1 */
	asn_DEF_FANSAltitudePosition_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSAltitudePosition_tags_1)
		/sizeof(asn_DEF_FANSAltitudePosition_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSAltitudePosition_1,
	2,	/* Elements count */
	&asn_SPC_FANSAltitudePosition_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSRTARequiredTimeArrival.h"

asn_TYPE_member_t asn_MBR_FANSRTARequiredTimeArrival_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSRTARequiredTimeArrival, position),
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
	{ ATF_NOFLAGS, 0, offsetof(struct FANSRTARequiredTimeArrival, rTATime),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSRTATime,
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
		"rTATime"
		},
	{ ATF_POINTER, 1, offsetof(struct FANSRTARequiredTimeArrival, rTATolerance),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_FANSRTATolerance,
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
		"rTATolerance"
		},
};
static const int asn_MAP_FANSRTARequiredTimeArrival_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_FANSRTARequiredTimeArrival_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSRTARequiredTimeArrival_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, 0, 0 }, /* rTATolerance */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* rTATime */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fixName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* navaid */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 }, /* airport */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* latitudeLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 0, 0, 0 } /* placeBearingDistance */
};
asn_SEQUENCE_specifics_t asn_SPC_FANSRTARequiredTimeArrival_specs_1 = {
	sizeof(struct FANSRTARequiredTimeArrival),
	offsetof(struct FANSRTARequiredTimeArrival, _asn_ctx),
	asn_MAP_FANSRTARequiredTimeArrival_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_FANSRTARequiredTimeArrival_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSRTARequiredTimeArrival = {
	"FANSRTARequiredTimeArrival",
	"FANSRTARequiredTimeArrival",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSRTARequiredTimeArrival_tags_1,
	sizeof(asn_DEF_FANSRTARequiredTimeArrival_tags_1)
		/sizeof(asn_DEF_FANSRTARequiredTimeArrival_tags_1[0]), /* 1 */
	asn_DEF_FANSRTARequiredTimeArrival_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSRTARequiredTimeArrival_tags_1)
		/sizeof(asn_DEF_FANSRTARequiredTimeArrival_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSRTARequiredTimeArrival_1,
	3,	/* Elements count */
	&asn_SPC_FANSRTARequiredTimeArrival_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/szpajder.libacars/fans-cpdlc.asn1"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -D /data/asn1_specs/szpajder.libacars/generated/fans-cpdlc.asn1`
 */

#include "FANSDistanceOffsetDirection.h"

asn_TYPE_member_t asn_MBR_FANSDistanceOffsetDirection_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSDistanceOffsetDirection, distanceOffset),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSDistanceOffset,
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
		"distanceOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSDistanceOffsetDirection, direction),
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
};
static const ber_tlv_tag_t asn_DEF_FANSDistanceOffsetDirection_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSDistanceOffsetDirection_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 0 }, /* direction */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* distanceOffsetNm */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 } /* distanceOffsetKm */
};
asn_SEQUENCE_specifics_t asn_SPC_FANSDistanceOffsetDirection_specs_1 = {
	sizeof(struct FANSDistanceOffsetDirection),
	offsetof(struct FANSDistanceOffsetDirection, _asn_ctx),
	asn_MAP_FANSDistanceOffsetDirection_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSDistanceOffsetDirection = {
	"FANSDistanceOffsetDirection",
	"FANSDistanceOffsetDirection",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSDistanceOffsetDirection_tags_1,
	sizeof(asn_DEF_FANSDistanceOffsetDirection_tags_1)
		/sizeof(asn_DEF_FANSDistanceOffsetDirection_tags_1[0]), /* 1 */
	asn_DEF_FANSDistanceOffsetDirection_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSDistanceOffsetDirection_tags_1)
		/sizeof(asn_DEF_FANSDistanceOffsetDirection_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSDistanceOffsetDirection_1,
	2,	/* Elements count */
	&asn_SPC_FANSDistanceOffsetDirection_specs_1	/* Additional specs */
};


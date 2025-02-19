/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSPublishedIdentifier.h"

asn_TYPE_member_t asn_MBR_FANSPublishedIdentifier_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPublishedIdentifier, fixName),
		(ASN_TAG_CLASS_UNIVERSAL | (22 << 2)),
		0,
		&asn_DEF_FANSFixName,
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
		"fixName"
		},
	{ ATF_POINTER, 1, offsetof(struct FANSPublishedIdentifier, latitudeLongitude),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSLatitudeLongitude,
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
		"latitudeLongitude"
		},
};
static const int asn_MAP_FANSPublishedIdentifier_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_FANSPublishedIdentifier_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSPublishedIdentifier_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* latitudeLongitude */
    { (ASN_TAG_CLASS_UNIVERSAL | (22 << 2)), 0, 0, 0 } /* fixName */
};
asn_SEQUENCE_specifics_t asn_SPC_FANSPublishedIdentifier_specs_1 = {
	sizeof(struct FANSPublishedIdentifier),
	offsetof(struct FANSPublishedIdentifier, _asn_ctx),
	asn_MAP_FANSPublishedIdentifier_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_FANSPublishedIdentifier_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSPublishedIdentifier = {
	"FANSPublishedIdentifier",
	"FANSPublishedIdentifier",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSPublishedIdentifier_tags_1,
	sizeof(asn_DEF_FANSPublishedIdentifier_tags_1)
		/sizeof(asn_DEF_FANSPublishedIdentifier_tags_1[0]), /* 1 */
	asn_DEF_FANSPublishedIdentifier_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSPublishedIdentifier_tags_1)
		/sizeof(asn_DEF_FANSPublishedIdentifier_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSPublishedIdentifier_1,
	2,	/* Elements count */
	&asn_SPC_FANSPublishedIdentifier_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSTimeICAOunitnameFrequency.h"

asn_TYPE_member_t asn_MBR_FANSTimeICAOunitnameFrequency_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSTimeICAOunitnameFrequency, time),
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
	{ ATF_NOFLAGS, 0, offsetof(struct FANSTimeICAOunitnameFrequency, iCAOUnitName),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSICAOUnitName,
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
		"iCAOUnitName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSTimeICAOunitnameFrequency, frequency),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSFrequency,
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
		"frequency"
		},
};
static const ber_tlv_tag_t asn_DEF_FANSTimeICAOunitnameFrequency_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSTimeICAOunitnameFrequency_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* time */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 0 }, /* iCAOUnitName */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* frequencyhf */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 }, /* frequencyvhf */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyuhf */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 } /* frequencysatchannel */
};
asn_SEQUENCE_specifics_t asn_SPC_FANSTimeICAOunitnameFrequency_specs_1 = {
	sizeof(struct FANSTimeICAOunitnameFrequency),
	offsetof(struct FANSTimeICAOunitnameFrequency, _asn_ctx),
	asn_MAP_FANSTimeICAOunitnameFrequency_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSTimeICAOunitnameFrequency = {
	"FANSTimeICAOunitnameFrequency",
	"FANSTimeICAOunitnameFrequency",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSTimeICAOunitnameFrequency_tags_1,
	sizeof(asn_DEF_FANSTimeICAOunitnameFrequency_tags_1)
		/sizeof(asn_DEF_FANSTimeICAOunitnameFrequency_tags_1[0]), /* 1 */
	asn_DEF_FANSTimeICAOunitnameFrequency_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSTimeICAOunitnameFrequency_tags_1)
		/sizeof(asn_DEF_FANSTimeICAOunitnameFrequency_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSTimeICAOunitnameFrequency_1,
	3,	/* Elements count */
	&asn_SPC_FANSTimeICAOunitnameFrequency_specs_1	/* Additional specs */
};


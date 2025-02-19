/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSAltimeter.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_FANSAltimeter_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_FANSAltimeter_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_FANSAltimeter_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltimeter, choice.altimeterEnglish),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltimeterEnglish,
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
		"altimeterEnglish"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAltimeter, choice.altimeterMetric),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAltimeterMetric,
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
		"altimeterMetric"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_FANSAltimeter_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* altimeterEnglish */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* altimeterMetric */
};
asn_CHOICE_specifics_t asn_SPC_FANSAltimeter_specs_1 = {
	sizeof(struct FANSAltimeter),
	offsetof(struct FANSAltimeter, _asn_ctx),
	offsetof(struct FANSAltimeter, present),
	sizeof(((struct FANSAltimeter *)0)->present),
	asn_MAP_FANSAltimeter_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_FANSAltimeter = {
	"FANSAltimeter",
	"FANSAltimeter",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_FANSAltimeter_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_FANSAltimeter_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_FANSAltimeter_1,
	2,	/* Elements count */
	&asn_SPC_FANSAltimeter_specs_1	/* Additional specs */
};


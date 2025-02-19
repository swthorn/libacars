/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSICAOFacilityFunction.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_FANSICAOFacilityFunction_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_FANSICAOFacilityFunction_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_FANSICAOFacilityFunction_value2enum_1[] = {
	{ 0,	6,	"center" },
	{ 1,	8,	"approach" },
	{ 2,	5,	"tower" },
	{ 3,	5,	"final" },
	{ 4,	13,	"groundControl" },
	{ 5,	17,	"clearanceDelivery" },
	{ 6,	9,	"departure" },
	{ 7,	7,	"control" }
};
static const unsigned int asn_MAP_FANSICAOFacilityFunction_enum2value_1[] = {
	1,	/* approach(1) */
	0,	/* center(0) */
	5,	/* clearanceDelivery(5) */
	7,	/* control(7) */
	6,	/* departure(6) */
	3,	/* final(3) */
	4,	/* groundControl(4) */
	2	/* tower(2) */
};
const asn_INTEGER_specifics_t asn_SPC_FANSICAOFacilityFunction_specs_1 = {
	asn_MAP_FANSICAOFacilityFunction_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_FANSICAOFacilityFunction_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_FANSICAOFacilityFunction_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_FANSICAOFacilityFunction = {
	"FANSICAOFacilityFunction",
	"FANSICAOFacilityFunction",
	&asn_OP_NativeEnumerated,
	asn_DEF_FANSICAOFacilityFunction_tags_1,
	sizeof(asn_DEF_FANSICAOFacilityFunction_tags_1)
		/sizeof(asn_DEF_FANSICAOFacilityFunction_tags_1[0]), /* 1 */
	asn_DEF_FANSICAOFacilityFunction_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSICAOFacilityFunction_tags_1)
		/sizeof(asn_DEF_FANSICAOFacilityFunction_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_FANSICAOFacilityFunction_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_FANSICAOFacilityFunction_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_FANSICAOFacilityFunction_specs_1	/* Additional specs */
};


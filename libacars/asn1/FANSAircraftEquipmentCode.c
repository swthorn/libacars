/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSAircraftEquipmentCode.h"

asn_TYPE_member_t asn_MBR_FANSAircraftEquipmentCode_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAircraftEquipmentCode, cOMNAVApproachEquipmentAvailable),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_FANSCOMNAVApproachEquipmentAvailable,
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
		"cOMNAVApproachEquipmentAvailable"
		},
	{ ATF_POINTER, 1, offsetof(struct FANSAircraftEquipmentCode, comnavequipmentstatus_seqOf),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSCOMNAVEquipmentStatusSequence,
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
		"comnavequipmentstatus-seqOf"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSAircraftEquipmentCode, sSREquipmentAvailable),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_FANSSSREquipmentAvailable,
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
		"sSREquipmentAvailable"
		},
};
static const int asn_MAP_FANSAircraftEquipmentCode_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_FANSAircraftEquipmentCode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSAircraftEquipmentCode_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 0, 0, 0 }, /* cOMNAVApproachEquipmentAvailable */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 2, 0, 0 }, /* sSREquipmentAvailable */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 } /* comnavequipmentstatus-seqOf */
};
asn_SEQUENCE_specifics_t asn_SPC_FANSAircraftEquipmentCode_specs_1 = {
	sizeof(struct FANSAircraftEquipmentCode),
	offsetof(struct FANSAircraftEquipmentCode, _asn_ctx),
	asn_MAP_FANSAircraftEquipmentCode_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_FANSAircraftEquipmentCode_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FANSAircraftEquipmentCode = {
	"FANSAircraftEquipmentCode",
	"FANSAircraftEquipmentCode",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSAircraftEquipmentCode_tags_1,
	sizeof(asn_DEF_FANSAircraftEquipmentCode_tags_1)
		/sizeof(asn_DEF_FANSAircraftEquipmentCode_tags_1[0]), /* 1 */
	asn_DEF_FANSAircraftEquipmentCode_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSAircraftEquipmentCode_tags_1)
		/sizeof(asn_DEF_FANSAircraftEquipmentCode_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSAircraftEquipmentCode_1,
	3,	/* Elements count */
	&asn_SPC_FANSAircraftEquipmentCode_specs_1	/* Additional specs */
};


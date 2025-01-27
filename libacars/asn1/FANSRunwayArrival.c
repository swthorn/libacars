/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "/data/asn1_specs/fans-cpdlc.asn1"
 * 	`asn1c -fincludes-quoted -fcompound-names -no-gen-example -D /data/libacars/libacars/libacars/asn1`
 */

#include "FANSRunwayArrival.h"

/*
 * This type is implemented using FANSRunway,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_FANSRunwayArrival_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_FANSRunwayArrival = {
	"FANSRunwayArrival",
	"FANSRunwayArrival",
	&asn_OP_SEQUENCE,
	asn_DEF_FANSRunwayArrival_tags_1,
	sizeof(asn_DEF_FANSRunwayArrival_tags_1)
		/sizeof(asn_DEF_FANSRunwayArrival_tags_1[0]), /* 1 */
	asn_DEF_FANSRunwayArrival_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSRunwayArrival_tags_1)
		/sizeof(asn_DEF_FANSRunwayArrival_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_FANSRunway_1,
	2,	/* Elements count */
	&asn_SPC_FANSRunway_specs_1	/* Additional specs */
};


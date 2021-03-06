/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "Rel7-AssistanceData-Extension.h"

static asn_TYPE_member_t asn_MBR_Rel7_AssistanceData_Extension_1[] = {
	{ ATF_POINTER, 4, offsetof(struct Rel7_AssistanceData_Extension, ganss_AssistData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GANSS_AssistData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganss-AssistData"
		},
	{ ATF_POINTER, 3, offsetof(struct Rel7_AssistanceData_Extension, ganssCarrierPhaseMeasurementRequest),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssCarrierPhaseMeasurementRequest"
		},
	{ ATF_POINTER, 2, offsetof(struct Rel7_AssistanceData_Extension, ganssTODGSMTimeAssociationMeasurementRequest),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssTODGSMTimeAssociationMeasurementRequest"
		},
	{ ATF_POINTER, 1, offsetof(struct Rel7_AssistanceData_Extension, add_GPS_AssistData),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Add_GPS_AssistData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"add-GPS-AssistData"
		},
};
static const int asn_MAP_Rel7_AssistanceData_Extension_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_Rel7_AssistanceData_Extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Rel7_AssistanceData_Extension_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ganss-AssistData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ganssCarrierPhaseMeasurementRequest */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ganssTODGSMTimeAssociationMeasurementRequest */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* add-GPS-AssistData */
};
static asn_SEQUENCE_specifics_t asn_SPC_Rel7_AssistanceData_Extension_specs_1 = {
	sizeof(struct Rel7_AssistanceData_Extension),
	offsetof(struct Rel7_AssistanceData_Extension, _asn_ctx),
	asn_MAP_Rel7_AssistanceData_Extension_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Rel7_AssistanceData_Extension_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Rel7_AssistanceData_Extension = {
	"Rel7-AssistanceData-Extension",
	"Rel7-AssistanceData-Extension",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Rel7_AssistanceData_Extension_tags_1,
	sizeof(asn_DEF_Rel7_AssistanceData_Extension_tags_1)
		/sizeof(asn_DEF_Rel7_AssistanceData_Extension_tags_1[0]), /* 1 */
	asn_DEF_Rel7_AssistanceData_Extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_Rel7_AssistanceData_Extension_tags_1)
		/sizeof(asn_DEF_Rel7_AssistanceData_Extension_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Rel7_AssistanceData_Extension_1,
	4,	/* Elements count */
	&asn_SPC_Rel7_AssistanceData_Extension_specs_1	/* Additional specs */
};


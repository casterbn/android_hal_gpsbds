/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "GPSAcquisAssist-R12-Ext-Element.h"

static int
dopplerUncertaintyExt2_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
dopplerUncertaintyExt2_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
dopplerUncertaintyExt2_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	dopplerUncertaintyExt2_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
dopplerUncertaintyExt2_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	dopplerUncertaintyExt2_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
dopplerUncertaintyExt2_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	dopplerUncertaintyExt2_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
dopplerUncertaintyExt2_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dopplerUncertaintyExt2_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
dopplerUncertaintyExt2_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	dopplerUncertaintyExt2_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
dopplerUncertaintyExt2_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	dopplerUncertaintyExt2_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
dopplerUncertaintyExt2_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	dopplerUncertaintyExt2_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
dopplerUncertaintyExt2_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	dopplerUncertaintyExt2_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_dopplerUncertaintyExt2_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_dopplerUncertaintyExt2_value2enum_3[] = {
	{ 0,	4,	"d300" },
	{ 1,	4,	"d400" },
	{ 2,	4,	"d500" },
	{ 3,	4,	"d600" },
	{ 4,	13,	"noInformation" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dopplerUncertaintyExt2_enum2value_3[] = {
	0,	/* d300(0) */
	1,	/* d400(1) */
	2,	/* d500(2) */
	3,	/* d600(3) */
	4	/* noInformation(4) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dopplerUncertaintyExt2_specs_3 = {
	asn_MAP_dopplerUncertaintyExt2_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_dopplerUncertaintyExt2_enum2value_3,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dopplerUncertaintyExt2_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dopplerUncertaintyExt2_3 = {
	"dopplerUncertaintyExt2",
	"dopplerUncertaintyExt2",
	dopplerUncertaintyExt2_3_free,
	dopplerUncertaintyExt2_3_print,
	dopplerUncertaintyExt2_3_constraint,
	dopplerUncertaintyExt2_3_decode_ber,
	dopplerUncertaintyExt2_3_encode_der,
	dopplerUncertaintyExt2_3_decode_xer,
	dopplerUncertaintyExt2_3_encode_xer,
	dopplerUncertaintyExt2_3_decode_uper,
	dopplerUncertaintyExt2_3_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_dopplerUncertaintyExt2_tags_3,
	sizeof(asn_DEF_dopplerUncertaintyExt2_tags_3)
		/sizeof(asn_DEF_dopplerUncertaintyExt2_tags_3[0]) - 1, /* 1 */
	asn_DEF_dopplerUncertaintyExt2_tags_3,	/* Same as above */
	sizeof(asn_DEF_dopplerUncertaintyExt2_tags_3)
		/sizeof(asn_DEF_dopplerUncertaintyExt2_tags_3[0]), /* 2 */
	&asn_PER_type_dopplerUncertaintyExt2_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dopplerUncertaintyExt2_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GPSAcquisAssist_R12_Ext_Element_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GPSAcquisAssist_R12_Ext_Element, satelliteID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SatelliteID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"satelliteID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GPSAcquisAssist_R12_Ext_Element, dopplerUncertaintyExt2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dopplerUncertaintyExt2_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dopplerUncertaintyExt2"
		},
};
static const ber_tlv_tag_t asn_DEF_GPSAcquisAssist_R12_Ext_Element_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GPSAcquisAssist_R12_Ext_Element_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* satelliteID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dopplerUncertaintyExt2 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GPSAcquisAssist_R12_Ext_Element_specs_1 = {
	sizeof(struct GPSAcquisAssist_R12_Ext_Element),
	offsetof(struct GPSAcquisAssist_R12_Ext_Element, _asn_ctx),
	asn_MAP_GPSAcquisAssist_R12_Ext_Element_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GPSAcquisAssist_R12_Ext_Element = {
	"GPSAcquisAssist-R12-Ext-Element",
	"GPSAcquisAssist-R12-Ext-Element",
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
	asn_DEF_GPSAcquisAssist_R12_Ext_Element_tags_1,
	sizeof(asn_DEF_GPSAcquisAssist_R12_Ext_Element_tags_1)
		/sizeof(asn_DEF_GPSAcquisAssist_R12_Ext_Element_tags_1[0]), /* 1 */
	asn_DEF_GPSAcquisAssist_R12_Ext_Element_tags_1,	/* Same as above */
	sizeof(asn_DEF_GPSAcquisAssist_R12_Ext_Element_tags_1)
		/sizeof(asn_DEF_GPSAcquisAssist_R12_Ext_Element_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GPSAcquisAssist_R12_Ext_Element_1,
	2,	/* Elements count */
	&asn_SPC_GPSAcquisAssist_R12_Ext_Element_specs_1	/* Additional specs */
};


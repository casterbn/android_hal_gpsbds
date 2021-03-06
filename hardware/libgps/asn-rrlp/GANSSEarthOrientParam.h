/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GANSSEarthOrientParam_H_
#define	_GANSSEarthOrientParam_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSEarthOrientParam */
typedef struct GANSSEarthOrientParam {
	long	 teop;
	long	 pmX;
	long	 pmXdot;
	long	 pmY;
	long	 pmYdot;
	long	 deltaUT1;
	long	 deltaUT1dot;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSEarthOrientParam_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSEarthOrientParam;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSEarthOrientParam_H_ */
#include <asn_internal.h>

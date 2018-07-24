/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_remapper__
#define __USER_CODE_H_remapper__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void remapper_startup();

void remapper_PI_rbs_in(const asn1SccBase_samples_RigidBodyState *);

void remapper_PI_mbs_in(const asn1SccBase_samples_RigidBodyState *);

extern void remapper_RI_rbs_out(const asn1SccBase_samples_RigidBodyState *);

extern void remapper_RI_mbs_out(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif

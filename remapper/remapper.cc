/* User code: This file will not be overwritten by TASTE. */

#include "remapper.h"

void remapper_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void remapper_PI_rbs_in(const asn1SccBase_samples_RigidBodyState *IN_rbs)
{
   remapper_RI_rbs_out(IN_rbs); 
}

void remapper_PI_mbs_in(const asn1SccBase_samples_RigidBodyState *IN_mbs)
{
   remapper_RI_mbs_out(IN_mbs);
}


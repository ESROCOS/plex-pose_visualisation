/* User code: This file will not be overwritten by TASTE. */

#include "dummyproducer.h"


asn1SccBase_samples_RigidBodyState rbs;
asn1SccBase_samples_RigidBodyState mbs;


void dummyproducer_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void dummyproducer_PI_clock()
{
  dummyproducer_RI_updaterobotpose(&rbs);
  dummyproducer_RI_updatemarkerpose(&mbs);	  /* Write your code here! */
}


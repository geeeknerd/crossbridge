/* APPLE LOCAL file v7 merge */
/* Test the `vreinterpretu64_p16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterpretu64_p16 (void)
{
  uint64x1_t out_uint64x1_t;
  poly16x4_t arg0_poly16x4_t;

  out_uint64x1_t = vreinterpret_u64_p16 (arg0_poly16x4_t);
}

/* { dg-final { cleanup-saved-temps } } */
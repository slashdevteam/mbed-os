/*
 *  Hardware entropy collector for the K64F, using Freescale's RNGA
 *
 *  Copyright (C) 2006-2015, ARM Limited, All Rights Reserved
 *  SPDX-License-Identifier: Apache-2.0
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may
 *  not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *  This file is part of mbed TLS (https://tls.mbed.org)
 */

/*
 * WARNING: this is temporary!
 * This should be in a separate yotta module which would be a target
 * dependency of mbedtls (see IOTSSL-313)
 */

/*
 * Reference: "K24 Sub-Family Reference Manual, Rev. 2", chapter 34
 */

#include "fsl_rnga.h"
// #include "fsl_pit.h"

/*
 * Get one byte of entropy from the RNG, assuming it is up and running.
 * As recommended (34.1.1), get only one bit of each output.
 */
static void rng_get_byte( unsigned char *byte )
{
    size_t bit;

    /* 34.5 Steps 3-4-5: poll SR and read from OR when ready */
    for( bit = 0; bit < 8; bit++ )
    {
        *byte |= ( rnga_ReadEntropy(RNG) & 1 ) << bit;
    }
}

/*
 * Get len bytes of entropy from the hardware RNG.
 */
int mbedtls_hardware_poll( void *data,
                    unsigned char *output, size_t len, size_t *olen )
{
    size_t i;
    int ret = 0;
    ((void) data);

    RNGA_Init(RNG, 1); // 1 for highAssurance
    // get seed from PIT
    // int32_t seed = PIT_GetCurrentTimerCount(PIT, kPIT_Chnl_0);
    // RNGA_Seed(RNG, seed);
    RNGA_SetMode(RNG, kRNGA_ModeNormal);

    for( i = 0; i < len; i++ )
        rng_get_byte( output + i );

    /* Just be extra sure that we didn't do it wrong */
    if( RNGA_GetSecurityViolation(RNG) != 0 )
    {
        ret = -1;
    }

    *olen = len;

    RNGA_Deinit(RNG);

    return( ret );
}

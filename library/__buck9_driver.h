/*
    __buck9_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __buck9_driver.h
@brief    BUCK9 Driver
@mainpage BUCK9 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   BUCK9
@brief      BUCK9 Click Driver
@{

| Global Library Prefix | **BUCK9** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **dec 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _BUCK9_H_
#define _BUCK9_H_

/** 
 * @macro T_BUCK9_P
 * @brief Driver Abstract type 
 */
#define T_BUCK9_P    const uint8_t*

/** @defgroup BUCK9_COMPILE Compilation Config */              /** @{ */

//  #define   __BUCK9_DRV_SPI__                            /**<     @macro __BUCK9_DRV_SPI__  @brief SPI driver selector */
//  #define   __BUCK9_DRV_I2C__                            /**<     @macro __BUCK9_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __BUCK9_DRV_UART__                           /**<     @macro __BUCK9_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup BUCK9_VAR Variables */                           /** @{ */

extern const uint8_t _BUCK9_DEVICE_ENABLE  ;
extern const uint8_t _BUCK9_DEVICE_DISABLE ;

                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup BUCK9_INIT Driver Initialization */              /** @{ */

#ifdef   __BUCK9_DRV_SPI__
void buck9_spiDriverInit(T_BUCK9_P gpioObj, T_BUCK9_P spiObj);
#endif
#ifdef   __BUCK9_DRV_I2C__
void buck9_i2cDriverInit(T_BUCK9_P gpioObj, T_BUCK9_P i2cObj, uint8_t slave);
#endif
#ifdef   __BUCK9_DRV_UART__
void buck9_uartDriverInit(T_BUCK9_P gpioObj, T_BUCK9_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void buck9_gpioDriverInit(T_BUCK9_P gpioObj);
                                                                       /** @} */
/** @defgroup BUCK9_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Function for enable or disable device
 *
 * @param[in] state     Disable or enable device
 *
 * When the device is enabled at the output gives 3.3v or 5v depending on the position of the jumper.
 */
void buck9_deviceEnable(uint8_t state);
                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_BUCK9_STM.c
    @example Click_BUCK9_TIVA.c
    @example Click_BUCK9_CEC.c
    @example Click_BUCK9_KINETIS.c
    @example Click_BUCK9_MSP.c
    @example Click_BUCK9_PIC.c
    @example Click_BUCK9_PIC32.c
    @example Click_BUCK9_DSPIC.c
    @example Click_BUCK9_AVR.c
    @example Click_BUCK9_FT90x.c
    @example Click_BUCK9_STM.mbas
    @example Click_BUCK9_TIVA.mbas
    @example Click_BUCK9_CEC.mbas
    @example Click_BUCK9_KINETIS.mbas
    @example Click_BUCK9_MSP.mbas
    @example Click_BUCK9_PIC.mbas
    @example Click_BUCK9_PIC32.mbas
    @example Click_BUCK9_DSPIC.mbas
    @example Click_BUCK9_AVR.mbas
    @example Click_BUCK9_FT90x.mbas
    @example Click_BUCK9_STM.mpas
    @example Click_BUCK9_TIVA.mpas
    @example Click_BUCK9_CEC.mpas
    @example Click_BUCK9_KINETIS.mpas
    @example Click_BUCK9_MSP.mpas
    @example Click_BUCK9_PIC.mpas
    @example Click_BUCK9_PIC32.mpas
    @example Click_BUCK9_DSPIC.mpas
    @example Click_BUCK9_AVR.mpas
    @example Click_BUCK9_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __buck9_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */
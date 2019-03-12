/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : McuLED4.h
**     Project     : FRDM-K64F_Generator
**     Processor   : MK64FN1M0VLL12
**     Component   : LED
**     Version     : Component 01.076, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-02-16, 17:45, # CodeGen: 426
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : McuLED4
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            On/Off                                       : Enabled
**              Pin                                        : SDK_BitIO
**            PWM                                          : Disabled
**            High Value means ON                          : no
**          Shell                                          : Enabled
**            Shell                                        : McuShell
**            Utility                                      : McuUtility
**     Contents    :
**         On           - void McuLED4_On(void);
**         Off          - void McuLED4_Off(void);
**         Neg          - void McuLED4_Neg(void);
**         Get          - uint8_t McuLED4_Get(void);
**         Put          - void McuLED4_Put(uint8_t val);
**         SetRatio16   - void McuLED4_SetRatio16(uint16_t ratio);
**         ParseCommand - uint8_t McuLED4_ParseCommand(const unsigned char *cmd, bool *handled, const...
**         Deinit       - void McuLED4_Deinit(void);
**         Init         - void McuLED4_Init(void);
**
** * Copyright (c) 2013-2019, Erich Styger
**  * Web:         https://mcuoneclipse.com
**  * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**  * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**  * All rights reserved.
**  *
**  * Redistribution and use in source and binary forms, with or without modification,
**  * are permitted provided that the following conditions are met:
**  *
**  * - Redistributions of source code must retain the above copyright notice, this list
**  *   of conditions and the following disclaimer.
**  *
**  * - Redistributions in binary form must reproduce the above copyright notice, this
**  *   list of conditions and the following disclaimer in the documentation and/or
**  *   other materials provided with the distribution.
**  *
**  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**  * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**  * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**  * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**  * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**  * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**  * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file McuLED4.h
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup McuLED4_module McuLED4 module documentation
**  @{
*/         

#ifndef __McuLED4_H
#define __McuLED4_H

/* MODULE McuLED4. */
#include "McuLib.h" /* SDK and API used */
#include "McuLED4config.h" /* LED configuration */
#include "LEDpin4.h" /* interface to pin */
#include "McuShell.h" /* interface to Shell */
#include "McuUtility.h" /* interface to Utility */

#define McuLED4_ClrVal()    LEDpin4_ClrVal() /* put the pin on low level */
#define McuLED4_SetVal()    LEDpin4_SetVal() /* put the pin on high level */
#define McuLED4_SetInput()  LEDpin4_SetInput() /* use the pin as input pin */
#define McuLED4_SetOutput() LEDpin4_SetOutput() /* use the pin as output pin */

#define McuLED4_PARSE_COMMAND_ENABLED  1 /* set to 1 if method ParseCommand() is present, 0 otherwise */


#define McuLED4_On() LEDpin4_ClrVal()
/*
** ===================================================================
**     Method      :  On (component LED)
**
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define McuLED4_Off() LEDpin4_SetVal()
/*
** ===================================================================
**     Method      :  Off (component LED)
**
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define McuLED4_Neg() LEDpin4_NegVal()
/*
** ===================================================================
**     Method      :  Neg (component LED)
**
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define McuLED4_Get() (!(LEDpin4_GetVal()))
/*
** ===================================================================
**     Method      :  Get (component LED)
**
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/

void McuLED4_Init(void);
/*
** ===================================================================
**     Method      :  Init (component LED)
**
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define McuLED4_Put(val)  ((val) ? McuLED4_On() : McuLED4_Off())
/*
** ===================================================================
**     Method      :  Put (component LED)
**
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/

void McuLED4_Deinit(void);
/*
** ===================================================================
**     Method      :  Deinit (component LED)
**
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

uint8_t McuLED4_ParseCommand(const unsigned char *cmd, bool *handled, const McuShell_StdIOType *io);
/*
** ===================================================================
**     Method      :  ParseCommand (component LED)
**
**     Description :
**         Shell Command Line parser. This method is enabled/disabled
**         depending on if you have the Shell enabled/disabled in the
**         properties.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * cmd             - Pointer to command string
**       * handled         - Pointer to variable which tells if
**                           the command has been handled or not
**       * io              - Pointer to I/O structure
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void McuLED4_SetRatio16(uint16_t ratio);
/*
** ===================================================================
**     Method      :  SetRatio16 (component LED)
**
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/

/* END McuLED4. */

#endif
/* ifndef __McuLED4_H */
/*!
** @}
*/

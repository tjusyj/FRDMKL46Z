/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : LED_ORANGE.h
**     Project     : ProcessorExpert
**     Processor   : MKL46Z256VMC4
**     Component   : BitIO
**     Version     : Component 02.086, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-07-26, 07:01, # CodeGen: 13
**     Abstract    :
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Note: This component is set to work in Output direction only.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
**     Settings    :
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       34            |  PTE26/TPM0_CH5/RTC_CLKOUT/USB_CLKIN
**             ----------------------------------------------------
**
**         Port name                   : PTE
**
**         Bit number (in port)        : 26
**         Bit mask of the port        : 0x04000000
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 0
**         Initial pull option         : off
**
**         Port data register          : GPIOE_PDOR [0x400FF100]
**         Port control register       : GPIOE_PDDR [0x400FF114]
**
**         Optimization for            : speed
**     Contents    :
**         GetVal - bool LED_ORANGE_GetVal(void);
**         PutVal - void LED_ORANGE_PutVal(bool Val);
**         ClrVal - void LED_ORANGE_ClrVal(void);
**         SetVal - void LED_ORANGE_SetVal(void);
**         NegVal - void LED_ORANGE_NegVal(void);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file LED_ORANGE.h
** @version 01.00
** @brief
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Note: This component is set to work in Output direction only.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
*/         
/*!
**  @addtogroup LED_ORANGE_module LED_ORANGE module documentation
**  @{
*/         

#ifndef __LED_ORANGE_H
#define __LED_ORANGE_H

/* MODULE LED_ORANGE. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "BitIoLdd4.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 




/*
** ===================================================================
**     Method      :  LED_ORANGE_GetVal (component BitIO)
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pin and returns it
**           b) direction = Output : returns the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  : None
**     Returns     :
**         ---             - Input value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)

** ===================================================================
*/
#define LED_ORANGE_GetVal() (BitIoLdd4_GetVal(BitIoLdd4_DeviceData))

/*
** ===================================================================
**     Method      :  LED_ORANGE_PutVal (component BitIO)
**     Description :
**         This method writes the new output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val             - Output value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)
**     Returns     : Nothing
** ===================================================================
*/
#define LED_ORANGE_PutVal(Val) (BitIoLdd4_PutVal(BitIoLdd4_DeviceData, (Val)))

/*
** ===================================================================
**     Method      :  LED_ORANGE_ClrVal (component BitIO)
**     Description :
**         This method clears (sets to zero) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define LED_ORANGE_ClrVal() (BitIoLdd4_ClrVal(BitIoLdd4_DeviceData))

/*
** ===================================================================
**     Method      :  LED_ORANGE_SetVal (component BitIO)
**     Description :
**         This method sets (sets to one) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define LED_ORANGE_SetVal() (BitIoLdd4_SetVal(BitIoLdd4_DeviceData))

/*
** ===================================================================
**     Method      :  LED_ORANGE_NegVal (component BitIO)
**     Description :
**         This method negates (inverts) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define LED_ORANGE_NegVal() (BitIoLdd4_NegVal(BitIoLdd4_DeviceData))

/* END LED_ORANGE. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __LED_ORANGE_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.2 [05.06]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/

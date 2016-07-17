/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : LED_YELLOW.c
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
**                       49            |  PTA16/SPI0_MOSI/SPI0_MISO/I2S0_RX_FS/I2S0_RXD0
**             ----------------------------------------------------
**
**         Port name                   : PTA
**
**         Bit number (in port)        : 16
**         Bit mask of the port        : 0x00010000
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 0
**         Initial pull option         : off
**
**         Port data register          : GPIOA_PDOR [0x400FF000]
**         Port control register       : GPIOA_PDDR [0x400FF014]
**
**         Optimization for            : speed
**     Contents    :
**         GetVal - bool LED_YELLOW_GetVal(void);
**         PutVal - void LED_YELLOW_PutVal(bool Val);
**         ClrVal - void LED_YELLOW_ClrVal(void);
**         SetVal - void LED_YELLOW_SetVal(void);
**         NegVal - void LED_YELLOW_NegVal(void);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file LED_YELLOW.c
** @version 01.00
** @brief
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Note: This component is set to work in Output direction only.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
*/         
/*!
**  @addtogroup LED_YELLOW_module LED_YELLOW module documentation
**  @{
*/         

/* MODULE LED_YELLOW. */

#include "LED_YELLOW.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Method      :  LED_YELLOW_GetVal (component BitIO)
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
/*
bool LED_YELLOW_GetVal(void)

**  This method is implemented as a macro. See LED_YELLOW.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED_YELLOW_PutVal (component BitIO)
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
/*
void LED_YELLOW_PutVal(bool Val)

**  This method is implemented as a macro. See LED_YELLOW.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED_YELLOW_ClrVal (component BitIO)
**     Description :
**         This method clears (sets to zero) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_YELLOW_ClrVal(void)

**  This method is implemented as a macro. See LED_YELLOW.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED_YELLOW_SetVal (component BitIO)
**     Description :
**         This method sets (sets to one) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_YELLOW_SetVal(void)

**  This method is implemented as a macro. See LED_YELLOW.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED_YELLOW_NegVal (component BitIO)
**     Description :
**         This method negates (inverts) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_YELLOW_NegVal(void)

**  This method is implemented as a macro. See LED_YELLOW.h file.  **
*/

/* END LED_YELLOW. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

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

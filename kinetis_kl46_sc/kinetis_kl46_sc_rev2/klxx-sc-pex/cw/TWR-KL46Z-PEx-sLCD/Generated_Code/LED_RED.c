/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : LED_RED.c
**     Project     : ProcessorExpert
**     Processor   : MKL46Z256VMC4
**     Component   : BitIO
**     Version     : Component 02.086, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-07-26, 07:01, # CodeGen: 13
**     Abstract    :
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
**     Settings    :
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       61            |  LCD_P8/PTB8/SPI1_PCS0/EXTRG_IN
**             ----------------------------------------------------
**
**         Port name                   : PTB
**
**         Bit number (in port)        : 8
**         Bit mask of the port        : 0x0100
**
**         Initial direction           : Output (direction can be changed)
**         Safe mode                   : yes
**         Initial output value        : 0
**         Initial pull option         : off
**
**         Port data register          : GPIOB_PDOR [0x400FF040]
**         Port control register       : GPIOB_PDDR [0x400FF054]
**
**         Optimization for            : speed
**     Contents    :
**         SetDir - void LED_RED_SetDir(bool Dir);
**         GetVal - bool LED_RED_GetVal(void);
**         PutVal - void LED_RED_PutVal(bool Val);
**         ClrVal - void LED_RED_ClrVal(void);
**         SetVal - void LED_RED_SetVal(void);
**         NegVal - void LED_RED_NegVal(void);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file LED_RED.c
** @version 01.00
** @brief
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
*/         
/*!
**  @addtogroup LED_RED_module LED_RED module documentation
**  @{
*/         

/* MODULE LED_RED. */

#include "LED_RED.h"

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Method      :  LED_RED_SetDir (component BitIO)
**     Description :
**         This method sets direction of the component.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Dir        - Direction to set (FALSE or TRUE)
**                      FALSE = Input, TRUE = Output
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_RED_SetDir(bool Dir)

**  This method is implemented as a macro. See LED_RED.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED_RED_GetVal (component BitIO)
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pin and returns it
**           b) direction = Output : returns the last written value
**     Parameters  : None
**     Returns     :
**         ---             - Input value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)

** ===================================================================
*/
/*
bool LED_RED_GetVal(void)

**  This method is implemented as a macro. See LED_RED.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED_RED_PutVal (component BitIO)
**     Description :
**         This method writes the new output value.
**           a) direction = Input  : sets the new output value;
**                                   this operation will be shown on
**                                   output after the direction has
**                                   been switched to output
**                                   (SetDir(TRUE);)
**           b) direction = Output : directly writes the value to the
**                                   appropriate pin
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val             - Output value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_RED_PutVal(bool Val)

**  This method is implemented as a macro. See LED_RED.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED_RED_ClrVal (component BitIO)
**     Description :
**         This method clears (sets to zero) the output value.
**           a) direction = Input  : sets the output value to "0";
**                                   this operation will be shown on
**                                   output after the direction has
**                                   been switched to output
**                                   (SetDir(TRUE);)
**           b) direction = Output : directly writes "0" to the
**                                   appropriate pin
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_RED_ClrVal(void)

**  This method is implemented as a macro. See LED_RED.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED_RED_SetVal (component BitIO)
**     Description :
**         This method sets (sets to one) the output value.
**           a) direction = Input  : sets the output value to "1";
**                                   this operation will be shown on
**                                   output after the direction has
**                                   been switched to output
**                                   (SetDir(TRUE);)
**           b) direction = Output : directly writes "1" to the
**                                   appropriate pin
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_RED_SetVal(void)

**  This method is implemented as a macro. See LED_RED.h file.  **
*/

/*
** ===================================================================
**     Method      :  LED_RED_NegVal (component BitIO)
**     Description :
**         This method negates (inverts) the output value.
**           a) direction = Input  : inverts the output value;
**                                   this operation will be shown on
**                                   output after the direction has
**                                   been switched to output
**                                   (SetDir(TRUE);)
**           b) direction = Output : directly inverts the value
**                                   of the appropriate pin
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED_RED_NegVal(void)

**  This method is implemented as a macro. See LED_RED.h file.  **
*/

/* END LED_RED. */

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

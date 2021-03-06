/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PTC.c
**     Project     : ProcessorExpert
**     Processor   : MKL46Z256VMC4
**     Component   : Init_GPIO
**     Version     : Component 01.003, Driver 01.03, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-07-26, 06:03, # CodeGen: 47
**     Abstract    :
**          This file implements the GPIO (PTC) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : PTC
**          Device                                         : PTC
**          Pins                                           : 
**            Pin 0                                        : Disabled
**            Pin 1                                        : Disabled
**            Pin 2                                        : Disabled
**            Pin 3                                        : Enabled
**              Pin                                        : LCD_P23/PTC3/LLWU_P7/UART1_RX/TPM0_CH2/CLKOUT/I2S0_TX_BCLK
**              Pin signal                                 : 
**              Pin direction                              : Input
**              Output value                               : No initialization
**              Pull enable                                : Enabled
**              Pull select                                : Pull Up
**              Slew rate                                  : No initialization
**              Interrupt and DMA configuration            : No initialization
**            Pin 4                                        : Disabled
**            Pin 5                                        : Disabled
**            Pin 6                                        : Disabled
**            Pin 7                                        : Disabled
**            Pin 8                                        : Disabled
**            Pin 9                                        : Disabled
**            Pin 10                                       : Disabled
**            Pin 11                                       : Disabled
**            Pin 12                                       : Disabled
**            Pin 13                                       : Disabled
**            Pin 16                                       : Disabled
**            Pin 17                                       : Disabled
**            Pin 18                                       : Disabled
**            Pin 20                                       : Disabled
**            Pin 21                                       : Disabled
**            Pin 22                                       : Disabled
**            Pin 23                                       : Disabled
**          Interrupts                                     : 
**            Port interrupt                               : Disabled
**          Initialization                                 : 
**            Call Init method                             : yes
**     Contents    :
**         Init - void PTC_Init(void);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file PTC.c
** @version 01.03
** @brief
**          This file implements the GPIO (PTC) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup PTC_module PTC module documentation
**  @{
*/         

/* MODULE PTC. */

#include "PTC.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"


/*
** ===================================================================
**     Method      :  PTC_Init (component Init_GPIO)
**     Description :
**         This method initializes registers of the GPIO module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void PTC_Init(void)
{
  /* GPIOC_PDDR: PDD&=~8 */
  GPIOC_PDDR &= (uint32_t)~(uint32_t)(GPIO_PDDR_PDD(0x08));                                   
}


/* END PTC. */
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

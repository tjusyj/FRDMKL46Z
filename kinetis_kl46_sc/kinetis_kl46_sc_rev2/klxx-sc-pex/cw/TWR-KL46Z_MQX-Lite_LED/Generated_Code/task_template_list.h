/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : task_template_list.h
**     Project     : ProcessorExpert
**     Processor   : MKL46Z256VMC4
**     Version     : Component 01.098, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-07-26, 06:03, # CodeGen: 47
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file task_template_list.h                                                  
** @version 01.00
*/         
/*!
**  @addtogroup task_template_list_module task_template_list module documentation
**  @{
*/         


#ifndef __task_template_list_h__
#define __task_template_list_h__

/* MQX Lite task IDs */
#define LED_TASK1_TASK       1U
#define LED_TASK2_TASK       2U
#define LED_TASK3_TASK       3U
#define LED_TASK4_TASK       4U
#define SW2_TASK5_TASK       5U
#define SW4_TASK6_TASK       6U

/* MQX Lite task stack sizes */
#define LED_TASK1_TASK_STACK_SIZE (sizeof(TD_STRUCT) + 1024 + PSP_STACK_ALIGNMENT + 1)
#define LED_TASK2_TASK_STACK_SIZE (sizeof(TD_STRUCT) + 1024 + PSP_STACK_ALIGNMENT + 1)
#define LED_TASK3_TASK_STACK_SIZE (sizeof(TD_STRUCT) + 1024 + PSP_STACK_ALIGNMENT + 1)
#define LED_TASK4_TASK_STACK_SIZE (sizeof(TD_STRUCT) + 1024 + PSP_STACK_ALIGNMENT + 1)
#define SW2_TASK5_TASK_STACK_SIZE (sizeof(TD_STRUCT) + 1024 + PSP_STACK_ALIGNMENT + 1)
#define SW4_TASK6_TASK_STACK_SIZE (sizeof(TD_STRUCT) + 1024 + PSP_STACK_ALIGNMENT + 1)


#endif /* __task_template_list_h__ */

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


/**
Copyright (c) 2008 Freescale Semiconductor
Freescale Confidential Proprietary
\file       rtc.h
\brief      real time clock basic functionality
\author     Freescale Semiconductor
\version    1.0
\date       Sep 14, 2011
*/

#include "common.h"
#include "rtc.h"

uint32 rtc_seconds_isrv_count;
uint32 alarm_seconds_count;

/**  rtc_init
 * \brief    Initialize RTC module to count seconds
 * \author   
 * \param none
 * \return none
 */ 




void rtc_init(void)
{
  /*enable the clock to SRTC module register space*/
  SIM_SCGC6 |= SIM_SCGC6_RTC_MASK;
  
  // Ensure  PTC1 configured as RTC inpuit cloclk
  PORTC_PCR1  &=  ~PORT_PCR_MUX_MASK ;
  PORTC_PCR1   =   PORT_PCR_MUX(1) ;
  
  SIM_SOPT1 |= SIM_SOPT1_OSC32KSEL(2); // RTC clock in
  #ifdef CMSIS
  //enable_irq((IRQn_Type)(INT_RTC-16));
  //enable_irq((IRQn_Type)(INT_RTC_Seconds-16));
	NVIC_EnableIRQ(RTC_IRQn);
	NVIC_EnableIRQ(RTC_Seconds_IRQn);
  #else
  enable_irq(INT_RTC-16);
  enable_irq(INT_RTC_Seconds-16);
  #endif
  RTC_IER |= RTC_IER_TSIE_MASK | RTC_IER_TAIE_MASK;
   
  //Configure the TSR and TAR
  if (!(RTC_SR & RTC_SR_TCE_MASK))   //if counter has not been updated
  {
   RTC_TSR =  0; //RTC Time Seconds Register
   RTC_TAR =   ALARM_TIME; //RTC Time Alarm Register
   RTC_SR  |= RTC_SR_TCE_MASK;       //Enable RTC_SR_TCE 
  }
     
}


void deinit_rtc(void)
{    
#ifdef CMSIS
NVIC_DisableIRQ(RTC_IRQn);
#else
    disable_irq(INT_RTC-16);
    #endif
}

extern char rtc_isrv_counter;
#ifdef CMSIS
void RTC_IRQHandler(void)
#else
void rtc_isrv(void)
#endif
{
    uint32 rtc_sr = RTC_SR;
    
    if(rtc_sr & RTC_SR_TAF_MASK) // RTC timer alarm flag is set
    {
      RTC_TAR = RTC_TAR + ALARM_TIME;     // write new value to TAR to clear TAF
      alarm_seconds_count++;  //initialized variable
      rtc_isrv_counter++;      //not initialized variable
    }
    
    if(rtc_sr & RTC_SR_TOF_MASK) // RTC timer Overlow flag is set
    {
     RTC_SR |= RTC_SR_TOF_MASK;
    }

    
    if (rtc_sr & RTC_SR_TIF_MASK) // Timer Invalid flag
    {
        RTC_SR &= ~RTC_SR_TCE_MASK;  //Disable timer
        RTC_TSR = 0x00; // write to clear TOF or TIF
        RTC_SR |= RTC_SR_TCE_MASK;   //re-enable timer
    }
}

#ifdef CMSIS
void RTC_Seconds_IRQHandler(void)
#else
void rtc_isrv_seconds(void)
#endif
{
  rtc_seconds_isrv_count++;

}

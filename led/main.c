#include "MKL46Z4.h"                    // Device header

void InitLED(void){ //This function enables the red LED on the FRDM-KL46Z development board

//Note, each chapter from the Reference Manual is a structure, while each register is a member of that structure, so we address them by Chapter -> Register

    SIM->SCGC5 |= SIM_SCGC5_PORTD_MASK | SIM_SCGC5_PORTE_MASK; //This enables the clock to PORTD/PORTE
    PORTD->PCR[5] = PORT_PCR_MUX(1u); //This sets the Mux control of PTD5 to 001, or GPIO
		PORTE->PCR[29]= PORT_PCR_MUX(1u);
    PTD->PDDR |= (1u<<5); //This sets PTD5 as an output.  There are no masks defined for each pin so we have to do it by hand and just comment well.
		PTE->PDDR |= (1u<<29);//RED LED2
	
}

void BlinkLED(void){//This method turns the LED off, then back on using a single command.  It must be run twice in order to blink the LED.

    uint32_t i = 0; //Create a loop variable
    PTD->PTOR = (1u<<5); //Toggles PTD5 and the LED
		PTE->PTOR = (1u<<29);
    for(i=0; i < 3000000; i++){}; //Burn some time
			
}

int main(void){

    InitLED(); //Initialize LED for use
		PTE->PTOR = (1u<<29);
    while(1){//Main loop
        BlinkLED(); //I prefer the third method.  All the command does is toggle the LED, which is exactly what we want to do.  All of the above methods will work.
    } //End main loop

}//End main

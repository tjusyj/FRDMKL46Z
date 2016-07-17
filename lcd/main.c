#include "MKL46Z4.h"                    // Device header
#include "Seg_LCD.h"

int main()
{
	uint16_t x;
	uint32_t i;
	SegLCD_Init();
	
	while(1)
	{
		x=1999;
		SegLCD_DisplayDecimal(x);
		for(i=0;i<2900000;i++);
	}
}

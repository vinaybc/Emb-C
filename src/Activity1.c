#include "Activity1.h"

void setup_io_pins(void)
{
	DDRB |=(1<<PB0); // B0=1 for led
	DDRD&=~(1<<PD0); // clear bit
	PORTD|=(1<<PD0);
	DDRD&=~(1<<PD1); // clear bit
	PORTD|=(1<<PD1);

}

/**
 * @brief Main Function where the Code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	// setup the leds
	setup_io_pins();

	while (1)
	{	
		if(!(PIND&(1<<PD0))&&(!(PIND&(1<<PD1))))//switch press
 	        {
       		 PORTB|=(1<<PB0);
     		}
     		else{
       		 PORTB&=~(1<<PB0);
		}
		
	}
	return 0;
}

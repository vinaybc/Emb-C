#include<avr/io.h>
int main()
{
    DDRB |= (1<<PB0); /* configuring port B as output */
    DDRD |= (0<<PD2);
    DDRD |= (0<<PD4);/* configure PD2 and PD4 of port D as input */
    PORTB &= ~(1<<PB0); /*write 0 to port B */
    while(1){
    if(PIND & 1<<PD2)/*PIND is Used for gpio read */
    {
        if(PIND & 1<<PD4)
        {
            PORTB |= (1<<PB0);/*if both buttons are selected led turns on*/
        }
        else
        PORTB &= ~(1<<PB0);
    }
    else
        PORTB &= ~(1<<PB0);
    }
    return 0;
}







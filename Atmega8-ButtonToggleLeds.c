/*
 * Blink.c
 *
 * Created: 23/01/2020 22:15:33
 * Author : User
 * Atmega8
 */ 

#define F_CPU 8000000UL
#define LED1 0
#define LED2 1
#define BUTTON 2

#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
    DDRB |= (1 << LED1) | (1 << LED2);
    DDRB &= ~(1 << BUTTON);
	
	PORTB = 0x03; // turn on leds
			 
    while (1) 
    {
		if(PINB & (1 << BUTTON))
		{
			PORTB |= (1 << LED1);
			PORTB &= ~(1 << LED2);
		}
		else
		{
			PORTB |= (1 << LED2);
			PORTB &= ~(1 << LED1);
		}
    }
}

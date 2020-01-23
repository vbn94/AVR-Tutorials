/*
 * Blink.c
 *
 * Created: 23/01/2020 22:15:33
 * Author : User
 * Atmega8
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
    DDRB |= (1 << PB0);
    PORTB |= (1 << PB0);
		 
    while (1) 
    {
		PORTB ^= (1 << PB0);
		_delay_ms(1000);
    }
}

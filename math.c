// PORTB is an 8bit number at address 0x25
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
int main(void){   DDRB = 0xFF; 	// turn PORTB on
	while(1){PORTB++;  			// increment PORTB
		_delay_ms(100);			// delay
}}

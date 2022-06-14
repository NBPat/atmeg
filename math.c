// PORTB is an 8bit number at address 0x24
#include <avr/io.h>
int main(void){   DDRB = 0xFF; 	// PORTB on   
	while(1){PORTB++;}}  		// increment PORTB

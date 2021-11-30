// count .c, Binary counting pattern on PORTB LEDs .
// http://web.engr.oregonstate.edu/~traylor/ece473/beamer_lectures/debug_techniques.pdf
#include <xc.h>
#include<avr/io.h>
#include<util/delay.h>
int main(void) 
    {
	uint8_t i;
	DDRB = 0xFF;
	while (1){
		PORTB ++;
		for (i =0; i <=4; i ++){ _delay_ms (100);}
	}
}

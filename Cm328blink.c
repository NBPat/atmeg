// http://rjhcoding.com/avrc-bit-manip.php
#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000
int main()
{
	// set PINB0 to output in DDRB
	DDRB |= 0b00000001;
	while(1)
	{
		// set PINB0 high
		PORTB |= 0b00000001;
		_delay_ms(500);

		// set PINB0 low
		PORTB &= 0b11111110;
		_delay_ms(500);
	}
}

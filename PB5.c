// DDRB is an 8bit number at address 0x24 Data Direction Register
// PORTB is an 8bit number at address 0x25 Data Port B
// PB5 is the number 5  
// (1<<PB5) is 00000001 shifted 5 pins left to 00100000 = 0x20
# define F_CPU 16000000
# include<avr/io.h>
# include<util/delay.h>
void main()
{	DDRB=(1<<PB5);  // set PB5 to output 
while(1){
	PORTB=(1<<PB5); // pin13 PB5 5volts
  _delay_ms(500);
  PORTB=!(1<<PB5); // pin13 PB5 0volts
  _delay_ms(500);}}

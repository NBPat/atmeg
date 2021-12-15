#include <avr/io.h>
#include <avr/delay.h>
int main(void)
{   DDRB = 0xFF;
    while(1){PORTB++; _delay_ms(30);}}

/* Name: main.c
 * Author: <insert your name here>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include <avr/io.h>
#include <util/delay.h>

#define TRUE 1
#define FALSE 0
#define NULL '\0'

// delay = 60

int main(void)
{
  DDRD = 0b00000011;
  unsigned char pin_c = 0;
  for(;;){
    pin_c = PINC & 0b00111111;
    PORTD = 0b00000010;
    _delay_ms(0.3);
    PORTD = 0b00000001;
    _delay_ms(0.3);
  }
  return 0;
}

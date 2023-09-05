/*
 * main.c
 * Created: 04-Sep-23 4:05:24 PM
 *  Author: Dinh Tuyen
 */ 
#include <avr/io.h>
#include <util/delay.h>

int main(void){
  DDRB = 0x01;
  while(1){
    PORTB = 0x01;
    _delay_ms(1000);
    PORTB = 0x00;
    _delay_ms(1000);
  }
}

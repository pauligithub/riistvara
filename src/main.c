#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS 500

void main (void)
{
    /* Set port B pin 7 for output for Arduino Mega yellow LED */
    DDRA |= _BV(DDA0);
    DDRA |= _BV(DDA2);
    DDRA |= _BV(DDA4);
    DDRB |= _BV(DDB7);
    PORTB &= ~_BV(PORTB7);

    while (1) {
        /* Set port A pin 22 high to turn Arduino Mega red LED on */
        PORTA |= _BV(PORTA0);
        _delay_ms(BLINK_DELAY_MS);
        /* Set port A pin 22 high to turn Arduino Mega red LED off */
        PORTA &= ~_BV(PORTA0);
        _delay_ms(BLINK_DELAY_MS);
        /* Set port A pin 24 high to turn Arduino Mega green LED on */
        PORTA |= _BV(PORTA2);
        _delay_ms(BLINK_DELAY_MS);
        /* Set port A pin 24 high to turn Arduino Mega green LED off */
        PORTA &= ~_BV(PORTA2);
        _delay_ms(BLINK_DELAY_MS);
        /* Set port A pin 26 high to turn Arduino Mega blue LED on */
        PORTA |= _BV(PORTA4);
        _delay_ms(BLINK_DELAY_MS);
        /* Set port A pin 26 high to turn Arduino Mega blue LED off */
        PORTA &= ~_BV(PORTA4);
        _delay_ms(BLINK_DELAY_MS);
    }
}


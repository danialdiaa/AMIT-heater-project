#include "button.h"
#include <avr/io.h>

#define BUTTON_UP_PIN       0   // Pin for UP button
#define BUTTON_DOWN_PIN     1   // Pin for DOWN button
#define BUTTON_ON_OFF_PIN   2   // Pin for ON/OFF button

void Button_init() {
    DDRA &= ~(1 << BUTTON_UP_PIN);
    DDRA &= ~(1 << BUTTON_DOWN_PIN);
    DDRA &= ~(1 << BUTTON_ON_OFF_PIN);
}

uint8_t Button_isSettingMode() {
    return (PINA & (1 << BUTTON_UP_PIN)) && (PINA & (1 << BUTTON_DOWN_PIN));
}

uint8_t Button_isPressed(uint8_t button) {
    return (PINA & (1 << button));
}

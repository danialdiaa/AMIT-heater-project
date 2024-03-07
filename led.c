#include "led.h"
#include <avr/io.h>

#define HEATING_LED_PIN     5   // Pin for heating element LED

void LED_init() {
    // Initialize heating element LED pin
    DDRA |= (1 << HEATING_LED_PIN);
}

void LED_handleBlinking() {
    static uint8_t blink_counter = 0;
    static uint8_t heating_element_state = 0; // Assuming 0 is OFF and 1 is ON

    // Toggle heating element LED every second
    if (blink_counter == 10) {
        if (heating_element_state) {
            PORTA ^= (1 << HEATING_LED_PIN); // Toggle LED pin
        }
        blink_counter = 0; // Reset blink counter
    }

    // Increment blink counter
    blink_counter++;
}
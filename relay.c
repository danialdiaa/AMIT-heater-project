#include "relay.h"
#include <avr/io.h>

#define HEATING_ELEMENT_PIN 6   // Pin for heating element
#define COOLING_ELEMENT_PIN 7   // Pin for cooling element

void Relay_init() {
    // Initialize solid-state relays for heating and cooling elements
    DDRA |= (1 << HEATING_ELEMENT_PIN) | (1 << COOLING_ELEMENT_PIN);
}

void Relay_turnHeatingElement(uint8_t state) {
    // Turn the heating element relay ON or OFF based on the specified state
    if (state)
        PORTA |= (1 << HEATING_ELEMENT_PIN);
    else
        PORTA &= ~(1 << HEATING_ELEMENT_PIN);
}

void Relay_turnCoolingElement(uint8_t state) {
    // Turn the cooling element relay ON or OFF based on the specified state
    if (state)
        PORTA |= (1 << COOLING_ELEMENT_PIN);
    else
        PORTA &= ~(1 << COOLING_ELEMENT_PIN);
}

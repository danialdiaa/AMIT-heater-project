#include "display.h"
#include <avr/io.h>

#define SEGMENT_DISPLAY_PIN 4   // Pin for seven segment display

void Display_init() {
    // Initialize seven segment display pins
    DDRA |= (1 << SEGMENT_DISPLAY_PIN);
}

void Display_showTemperature(uint8_t temp) {
    // Display the current water temperature on the seven segment display
}

void Display_showSetTemperature(uint8_t temp) {
    // Display the set temperature in temperature setting mode
}

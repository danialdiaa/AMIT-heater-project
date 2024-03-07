#include "temperature.h"
#include <avr/io.h>

#define TEMP_SENSOR_PIN     3   // Pin for temperature sensor

void Temperature_init() {
    // Initialize ADC for temperature sensor (ADC3)
    ADMUX |= (1 << REFS0);  // Reference voltage on AVCC
    ADCSRA |= (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1); // ADC enable, prescaler = 64
}

uint8_t Temperature_read() {
    // Read temperature from sensor and convert to Celsius
    ADCSRA |= (1 << ADSC);  // Start ADC conversion
    while (ADCSRA & (1 << ADSC)); // Wait for conversion to complete
    uint16_t adc_value = ADC; // Read ADC value
    return ((adc_value * 500) / 1024); // Convert ADC value to Celsius
}

void Temperature_controlElements(uint8_t currentTemp, uint8_t setTemp) {
    // Control heating and cooling elements based on current temperature and desired temperature settings
}

void Temperature_handleSettingMode(uint8_t *setTemp) {
    // Handle temperature setting mode using UP and DOWN buttons
}

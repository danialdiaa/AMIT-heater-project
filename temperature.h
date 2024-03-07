#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <avr/io.h>

void Temperature_init();
uint8_t Temperature_read();
void Temperature_controlElements(uint8_t currentTemp, uint8_t setTemp);
void Temperature_handleSettingMode(uint8_t *setTemp);

#endif // TEMPERATURE_H

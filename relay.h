#ifndef RELAY_H
#define RELAY_H

#include <avr/io.h>

void Relay_init();
void Relay_turnHeatingElement(uint8_t state);
void Relay_turnCoolingElement(uint8_t state);

#endif // RELAY_H

#ifndef EEPROM_H
#define EEPROM_H

#include <avr/io.h>

void EEPROM_init();
uint8_t EEPROM_readTemperature();
void EEPROM_writeTemperature(uint8_t temp);

#endif // EEPROM_H

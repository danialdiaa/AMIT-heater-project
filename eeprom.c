#include "eeprom.h"
#include <avr/io.h>
#include <avr/eeprom.h>

void EEPROM_init() {
    // No initialization needed for EEPROM
}

uint8_t EEPROM_readTemperature() {
    // Read the stored temperature from EEPROM
    return eeprom_read_byte((uint8_t *)0);
}

void EEPROM_writeTemperature(uint8_t temp) {
    // Write the specified temperature to EEPROM for storage
    eeprom_write_byte((uint8_t *)0, temp);
}

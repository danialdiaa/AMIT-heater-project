#ifndef DISPLAY_H
#define DISPLAY_H

#include <avr/io.h>

void Display_init();
void Display_showTemperature(uint8_t temp);
void Display_showSetTemperature(uint8_t temp);

#endif // DISPLAY_H

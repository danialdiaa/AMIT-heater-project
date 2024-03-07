#ifndef BUTTON_H
#define BUTTON_H

#include <avr/io.h>

void Button_init();
uint8_t Button_isSettingMode();
uint8_t Button_isPressed(uint8_t button);

#endif // BUTTON_H

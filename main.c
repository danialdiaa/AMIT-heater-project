#include <avr/io.h>
#include <util/delay.h>
#include "button.h"
#include "temperature.h"
#include "display.h"
#include "eeprom.h"
#include "led.h"
#include "relay.h"

int main() {
    Button_init();
    Temperature_init();
    Display_init();
    EEPROM_init();
    LED_init();
    Relay_init();

    uint8_t currentTemp;
    uint8_t setTemp = EEPROM_readTemperature();

    while (1) {
        if (Button_isSettingMode()) {
            Temperature_handleSettingMode(&setTemp);
            Display_showSetTemperature(setTemp);
            EEPROM_writeTemperature(setTemp);
        } else {
            currentTemp = Temperature_read();
            Temperature_controlElements(currentTemp, setTemp);
            Display_showTemperature(currentTemp);
        }

        LED_handleBlinking();

        _delay_ms(100);
    }

    return 0;
}

#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include "mbed.h"

class LEDController {
private:
    DigitalOut red_led;
    DigitalOut green_led;

public:
    LEDController(PinName red_pin, PinName green_pin);
    void toggleRed();
    void blinkGreen();
    void setRed(bool state);
};

#endif

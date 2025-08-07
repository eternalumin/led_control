#ifndef BUTTON_HANDLER_H
#define BUTTON_HANDLER_H

#include "mbed.h"
#include "led_controller.h"

class ButtonHandler {
private:
    InterruptIn button;
    LEDController &ledController;
    Timer debounceTimer;

public:
    ButtonHandler(PinName button_pin, LEDController &controller);
    void onPress();
};

#endif

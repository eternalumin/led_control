#include "button_handler.h"

#define DEBOUNCE_DELAY 200 // ms

ButtonHandler::ButtonHandler(PinName button_pin, LEDController &controller)
    : button(button_pin), ledController(controller) {
    debounceTimer.start();
    button.rise(callback(this, &ButtonHandler::onPress));
}

void ButtonHandler::onPress() {
    if (debounceTimer.elapsed_time().count() > DEBOUNCE_DELAY * 1000) {
        ledController.toggleRed();
        debounceTimer.reset();
    }
}

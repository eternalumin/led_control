#include "led_controller.h"

LEDController::LEDController(PinName red_pin, PinName green_pin)
    : red_led(red_pin), green_led(green_pin) {
    red_led = 0;
    green_led = 0;
}

void LEDController::toggleRed() {
    red_led = !red_led;
}

void LEDController::blinkGreen() {
    green_led = !green_led;
}

void LEDController::setRed(bool state) {
    red_led = state;
}

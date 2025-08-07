#include "mbed.h"
#include "led_controller.h"
#include "button_handler.h"
#include "system_logger.h"

LEDController led(D2, D3);        // Red LED -> D2, Green LED -> D3
ButtonHandler button(USER_BUTTON, led);

int main() {
    SystemLogger::log("System Started");

    while (true) {
        led.blinkGreen();
        SystemLogger::log("Green LED toggled");
        ThisThread::sleep_for(500ms);

        // Enter simulated low power mode
        __WFI();
    }
}

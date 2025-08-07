LED Control System with MBED & CMSIS (Simulation)

🚀 An advanced embedded system simulation project built using MBED OS, CMSIS drivers, and ARM Cortex-M microcontrollers.
This project demonstrates multi-mode LED control, interrupt-driven button handling, and modular bare-metal design principles—structured like production firmware.


---

📂 Project Structure

LED_Control_MBED_CMSIS/
│── src/
│   ├── main.cpp              # Main application loop
│   ├── led_controller.cpp    # LED control implementation
│   ├── led_controller.h      # LED control interface
│   ├── button_handler.cpp    # Button interrupt & debounce logic
│   ├── button_handler.h      # Button handler interface
│   ├── system_logger.cpp     # Logger for debug & telemetry
│   ├── system_logger.h       # Logger interface
│── README.md                 # Project documentation
│── LICENSE                   # MIT License


---

⚡ Features

Three LED modes

Mode 0: Alternating LEDs

Mode 1: Double blink pattern

Mode 2: Rapid flash sequence


Interrupt-based button control with debounce logic

Modular firmware design (separate .cpp / .h for each component)

CMSIS & MBED integration for GPIO and timers

Simulation-friendly logging via serial output



---

🛠 Requirements

Hardware (Optional for simulation)

Nucleo-F401RE (or any MBED-supported ARM Cortex-M board)

2 LEDs + 1 push button


Software

MBED Studio or Online Compiler

CMSIS libraries (bundled with MBED OS)




---

📜 Usage

1. Clone the repository



git clone https://github.com/<your-username>/LED_Control_MBED_CMSIS.git

2. Open in MBED Studio


3. Compile & Run (Simulation or hardware)

For simulation: Debug using MBED Studio (check LED variables in watch window)

For hardware: Flash .bin to target board





---

🔍 Mode Logic

Mode	Red LED	Green LED

0	Alternating toggle	Alternating toggle
1	Double blink	Double blink
2	Rapid flash	Rapid flash


Button press cycles through the modes.


---

📈 Simulation Output Example

[LOG] System Initialized
[LOG] Mode Changed To: 0
[LOG] Mode 0: Alternating LEDs
[LOG] Mode Changed To: 1
[LOG] Mode 1: Double Blink Pattern
[LOG] Mode Changed To: 2
[LOG] Mode 2: Rapid Flash Pattern


---

📜 License

This project is licensed under the MIT License.


---

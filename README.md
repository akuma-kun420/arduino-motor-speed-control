# arduino-motor-speed-control

## Potentiometer-Based DC Motor Speed Control and Status Indication Using Arduino

This project is a simulation-based DC motor speed control system developed using an Arduino Uno, potentiometer, L298N motor driver, DC motor, and two LEDs. The project was developed using the Wokwi simulator with VS Code and PlatformIO.

The potentiometer is used as the input to control the speed of the DC motor. The Arduino reads the analog value from the potentiometer through the A0 pin and converts the value into a PWM signal. This PWM signal is applied to the ENA pin of the L298N motor driver to control the motor speed. The IN1 and IN2 pins of the L298N are controlled by the Arduino to set the motor direction.

Two LEDs are used to indicate the operating condition of the system. When the potentiometer is at zero, the red LED turns ON and the green LED remains OFF, indicating that the motor is stopped. When the potentiometer is increased, the red LED turns OFF and the green LED turns ON, indicating that the motor is running. As the potentiometer value increases, the PWM value also increases, resulting in an increase in motor speed.

Through this project, I learned how to work with Arduino GPIO and analog input pins, read potentiometer values using `analogRead()`, generate PWM using `analogWrite()`, control a motor using an L298N driver, interface LEDs with current-limiting resistors, and understand basic circuit connections such as common 5V and GND connections. I also gained practical experience in writing and debugging Arduino C++ code and building and simulating the circuit using Wokwi, VS Code, and PlatformIO.

The project helped me understand the relationship between an analog input, PWM control, motor speed, and visual status indication in a simple embedded system.

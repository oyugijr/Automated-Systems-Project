# Task 4: Sound-Activated Alarm System

## Objective

To design a sound-activated alarm system using a sound sensor and an Arduino. The system activates an alarm (LED or buzzer) when a loud sound is detected.

## Components Used

- Sound sensor (e.g., microphone module)
- Arduino Uno
- Buzzer or LEDs
- Resistors (220Ω for LEDs)

## Circuit Design

- Connect the sound sensor's output to an analog input pin (e.g., A2).
- Connect the buzzer or LEDs to a digital output pin.

## Circuit Diagram

![Circuit Diagram](CircuitDiagram.png)

## Programming Logic

- Read the analog value from the sound sensor.
- Set a threshold for sound intensity.
- Activate the alarm when the threshold is exceeded.

## Testing and Results

The system was tested with varying sound levels. The alarm activated successfully when a loud sound was detected.

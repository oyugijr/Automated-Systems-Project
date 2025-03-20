# Task 1: Automated Lighting System

## Objective

To design an automated lighting system using an LDR and Arduino. The system turns on an LED in low light conditions and turns it off in bright conditions.

## Components Used

- LDR (Light Dependent Resistor)
- Arduino Uno
- Resistor (`10kΩ` for LDR, `220Ω` for LED)
- LED(s)
- Breadboard and jumper wires

## Circuit Design

- Connect the LDR in a voltage divider configuration with a 10kΩ resistor.
- Connect the output of the voltage divider to an analog input pin on the Arduino (e.g., A0).
- Connect the LED to a digital output pin (e.g., D9) with a current-limiting resistor (220Ω).

## Programming Logic

- Read the analog value from the LDR.
- Set a threshold value for light intensity (e.g., 500).
- If the value is below the threshold (dark), turn on the LED. If above the threshold (bright), turn it off..

### Circuit Diagram

![Circuit Diagram](CircuitDiagram.png)

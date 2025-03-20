# Task 3: Digital Combination Lock

## Objective

To create a digital combination lock system using push buttons and an Arduino. The system recognizes a specific sequence of button presses as the correct combination.

## Components Used

- Push buttons (3 or more)
- Arduino Uno
- LEDs
- Resistors (`10kΩ` for buttons, `220Ω` for LEDs)

## Circuit Design

- Connected each button to a digital input pin with a pull-down resistor. 
- Connected the LEDs to digital output pins with current-limiting resistors.

## Circuit Diagram

![Circuit Diagram](CircuitDiagram.png)

## Programming logic

- Define a sequence of button presses as the correct combination.
- Use a counter to track the sequence of button presses.
- If the correct sequence is entered, light up the LED(s).

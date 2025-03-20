# Task 2: Temperature-Activated Fan System

## Objective

To design a temperature-activated fan system using a TMP36 temperature sensor and an Arduino. The fan will activate when the temperature exceeds a certain threshold and turn off when it falls below another threshold.

## Components Used

- TMP36 temperature sensor
- Arduino Uno
- Small DC fan (or LED for simulation)
- Transistor (`e.g., 2N2222`) to drive the fan
- Resistor `(10kΩ for TMP36, 220Ω for LED)`

## Circuit Design

- Connect the TMP36 sensor's output to an analog input pin (e.g., `A1`).
- Use a transistor to control the fan, with the base connected to a digital output pin (e.g., `D10`) through a resistor.
- Connect the fan to the collector of the transistor and the emitter to ground.

## Programming Logic

- Read the analog value from the TMP36 and convert it to temperature in Celsius.
= Set upper and lower thresholds (e.g., `30°C` to turn on the fan, `25°C` to turn it off).
- Control the fan based on the temperature readings.

### Circuit Diagram

![Circuit Diagram](CircuitDiagram.png)

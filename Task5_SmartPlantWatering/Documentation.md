# Task 5: Smart Plant Watering System

## Objective

This task involves designing a smart plant watering system using a soil moisture sensor and an Arduino. The system activates a water pump when the soil moisture level falls below a certain threshold.

## Components Used

- Soil moisture sensor
- Arduino Uno
- Water pump (or LED for simulation)
- Transistor (e.g., `2N2222`)
- Resistors (`10kΩ` for sensor, `220Ω` for LED)

## Circuit Design

- Connect the soil moisture sensor's output to an analog input pin (e.g., `A3`).
- Use a transistor to control the pump, with the base connected to a digital output pin.

## Programming Logic

- Read the analog value from the soil moisture sensor.
- Set thresholds for dry and optimal soil moisture levels.
- Activate the pump when the soil is dry and deactivate it when the moisture is sufficient.

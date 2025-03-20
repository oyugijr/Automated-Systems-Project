int tempPin = A1; // TMP36 connected to analog pin A1
int fanPin = 10;  // Fan connected to digital pin 10
float tempC;      // Variable to store temperature in Celsius

void setup()
{
    pinMode(fanPin, OUTPUT);
    Serial.begin(9600); // For debugging
}

void loop()
{
    int tempValue = analogRead(tempPin);              // Read TMP36 value
    tempC = (tempValue * 5.0 / 1024.0 - 0.5) * 100.0; // Convert to Celsius
    Serial.println(tempC);                            // Print temperature for debugging

    if (tempC > 30)
    {
        digitalWrite(fanPin, HIGH); // Turn on fan if temperature > 30°C
    }
    else if (tempC < 25)
    {
        digitalWrite(fanPin, LOW); // Turn off fan if temperature < 25°C
    }
    delay(1000); // Delay for stability
}
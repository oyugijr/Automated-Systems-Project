int ldrPin = A0;     // LDR connected to analog pin A0
int ledPin = 9;      // LED connected to digital pin 9
int threshold = 500; // Threshold for light intensity

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600); // For debugging
}

void loop()
{
    int ldrValue = analogRead(ldrPin); // Read LDR value
    Serial.println(ldrValue);          // Print LDR value for debugging
    if (ldrValue < threshold)
    {
        digitalWrite(ledPin, HIGH); // Turn on LED if it's dark
    }
    else
    {
        digitalWrite(ledPin, LOW); // Turn off LED if it's bright
    }
    delay(100); // Small delay for stability
}
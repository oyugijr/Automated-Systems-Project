int moisturePin = A3;   // Soil moisture sensor connected to analog pin A3
int pumpPin = 10;       // Water pump connected to pin 10
int dryThreshold = 400; // Threshold for dry soil
int wetThreshold = 700; // Threshold for wet soil

void setup()
{
    pinMode(pumpPin, OUTPUT);
    Serial.begin(9600); // For debugging
}

void loop()
{
    int moistureValue = analogRead(moisturePin); // Read soil moisture value
    Serial.println(moistureValue);               // Print moisture value for debugging

    if (moistureValue < dryThreshold)
    {
        digitalWrite(pumpPin, HIGH); // Turn on pump if soil is dry
    }
    else if (moistureValue > wetThreshold)
    {
        digitalWrite(pumpPin, LOW); // Turn off pump if soil is wet
    }
    delay(1000); // Delay for stability
}
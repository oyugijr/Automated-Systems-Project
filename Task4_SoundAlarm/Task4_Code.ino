int soundPin = A2;   // Sound sensor connected to analog pin A2
int alarmPin = 9;    // Alarm (LED or buzzer) connected to pin 9
int threshold = 600; // Threshold for sound intensity

void setup()
{
    pinMode(alarmPin, OUTPUT);
    Serial.begin(9600); // For debugging
}

void loop()
{
    int soundValue = analogRead(soundPin); // Read sound sensor value
    Serial.println(soundValue);            // Print sound value for debugging
    if (soundValue > threshold)
    {
        digitalWrite(alarmPin, HIGH); // Activate alarm if sound exceeds threshold
        delay(1000);                  // Keep alarm on for 1 second
        digitalWrite(alarmPin, LOW);  // Deactivate alarm
    }
    delay(100); // Small delay for stability
}
int buttonPins[] = {2, 3, 4}; // Push buttons connected to pins 2, 3, and 4
int ledPin = 9;               // LED connected to pin 9
int sequence[] = {2, 3, 4};   // Correct button sequence
int inputIndex = 0;           // Tracks the current input position

void setup()
{
    for (int i = 0; i < 3; i++)
    {
        pinMode(buttonPins[i], INPUT_PULLUP); // Set buttons as input with pull-up resistors
    }
    pinMode(ledPin, OUTPUT); // Set LED as output
}

void loop()
{
    for (int i = 0; i < 3; i++)
    {
        if (digitalRead(buttonPins[i]) == LOW)
        { // Check if button is pressed
            if (sequence[inputIndex] == buttonPins[i])
            {
                inputIndex++; // Move to the next step in the sequence
                if (inputIndex == 3)
                {                               // If sequence is complete
                    digitalWrite(ledPin, HIGH); // Unlock (turn on LED)
                    delay(5000);                // Keep LED on for 5 seconds
                    digitalWrite(ledPin, LOW);  // Lock again
                    inputIndex = 0;             // Reset sequence
                }
            }
            else
            {
                inputIndex = 0; // Reset on wrong input
            }
            delay(300); // Debounce delay
        }
    }
}
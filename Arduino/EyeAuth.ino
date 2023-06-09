// Pin assignments
const int blinkSensorPin = A0; // Pin connected to the infrared eye blink sensor
const int buttonPin = 2;       // Pin connected to the button mounted on top of the SoloKey

// Variables
int blinkSensorThreshold = 500; // Adjust this threshold based on your sensor and lighting conditions

void setup()
{
    pinMode(blinkSensorPin, INPUT); // Set the blink sensor pin as an input
    pinMode(buttonPin, OUTPUT);     // Set the button pin as an output
}

void loop()
{
    // Read the value from the blink sensor
    int sensorValue = analogRead(blinkSensorPin);

    // Check if a blink is detected
    if (sensorValue < blinkSensorThreshold)
    {
        // Simulate a button press
        digitalWrite(buttonPin, HIGH); // Press the button
        delay(100);                    // Adjust the duration if needed
        digitalWrite(buttonPin, LOW);  // Release the button
        delay(100);                    // Wait for a period before the next button press (if desired)
    }
}

/*
   Project name: ESP32 Push Button
   Modified Date: 24-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-push-button
*/

const int buttonPin = 2; // GPIO pin connected to the push button
bool buttonState = false; // Variable to store the state of the button

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(buttonPin, INPUT_PULLUP); // Configure push button pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the push button
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed (input is LOW)
  if (buttonState == LOW) {
    Serial.println("Button pressed!");
  } else {
    Serial.println("Button released.");
  }

  delay(100); // Add a small delay to debounce the button
}

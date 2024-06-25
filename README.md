# ESP32 Push Button Project

### Project Overview
The ESP32 Push Button project demonstrates how to monitor the state of a push button using an ESP32 microcontroller. Push buttons are fundamental input devices used for user interaction in various electronic applications such as IoT devices, control panels, and interactive displays.

### Components Needed
- **ESP32 Microcontroller**: Controls and reads the state of the push button.
- **Push Button**: Mechanical switch used to toggle between open and closed states.
- **Jumper Wires**: Connect the push button to the ESP32.
- **Breadboard**: Optional, for organizing the circuit connections.

### Block diagram

### Circuit Setup
1. **Connecting the Push Button to ESP32:**
   - **Digital Input (buttonPin)**: Connect one terminal of the push button to GPIO 2 on the ESP32.
   - **Internal Pull-up Resistor**: Enable the internal pull-up resistor using `pinMode(buttonPin, INPUT_PULLUP)`.

### Instructions
1. **Setup:**
   - Initialize serial communication for debugging using `Serial.begin(9600)`.
   - Configure the GPIO pin connected to the push button (`buttonPin` set to 2) as an input with an internal pull-up resistor.

2. **Operation:**
   - **Reading Button State:**
     - Use `digitalRead(buttonPin)` to detect the state of the push button.
     - Print the button state to the Serial Monitor using `Serial.println`.

3. **Considerations:**
   - **Debouncing:** Implement a small delay (`delay(100)`) to debounce the push button and stabilize readings.
   - **Input Handling:** Understand the logic level (LOW or HIGH) corresponding to button press and release based on your circuit design.

### Applications
- **User Interface:** Control functions or trigger events in electronic devices.
- **IoT Devices:** Use buttons for manual control or configuration in IoT applications.
- **Interactive Displays:** Implement buttons for user interaction in touch-enabled displays.

### Useful Links
🌐 [ProjectsLearner - ESP32 Push Button](https://projectslearner.com/learn/esp32-push-button)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner

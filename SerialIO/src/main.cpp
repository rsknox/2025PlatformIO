#include <Arduino.h>
void setup() {
  Serial.begin(115200); // Start serial communication at 115200 baud
  while (!Serial) {
    ; // Wait for serial port to connect (needed for native USB)
  }
  Serial.println("ESP32 Serial Input/Output Example");
  Serial.println("Type something and press Enter:");
}

void loop() {
  if (Serial.available() > 0) {
    // Read the incoming data
    String input = Serial.readStringUntil('\n'); // Read until newline
    input.trim(); // Remove any whitespace or carriage return
    Serial.print("You entered: ");
    Serial.println(input);
    Serial.println("Type something else:");
  }
}


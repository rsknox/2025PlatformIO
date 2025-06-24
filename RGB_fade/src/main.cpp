#include <Arduino.h>

// Define RGB pins
const int RED_PIN   = 5;
const int GREEN_PIN = 18;
const int BLUE_PIN  = 19;

void setup() {
  // Set RGB pins as output
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  // Fade Red to Green
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED_PIN, 255 - i);
    analogWrite(GREEN_PIN, i);
    analogWrite(BLUE_PIN, 0);
    delay(10);
  }

  // Fade Green to Blue
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 255 - i);
    analogWrite(BLUE_PIN, i);
    delay(10);
  }

  // Fade Blue to Red
  for (int i = 0; i <= 255; i++) {
    analogWrite(RED_PIN, i);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 255 - i);
    delay(10);
  }
}

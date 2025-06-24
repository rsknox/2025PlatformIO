#include <Arduino.h>

#include <Keypad.h>

const byte ROWS = 4; // Four rows
const byte COLS = 3; // Three columns

// Define keymap for 3x4 keypad
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

// Adjust these GPIO pins to match your actual wiring
byte rowPins[ROWS] = {14, 27, 26, 25};  // Connect to the row pins of the keypad
byte colPins[COLS] = {33, 32, 13};       // Connect to the column pins

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(115200);
  delay(250);
  Serial.println("3x4 Keypad Test Initialized");
  //delay(5000);
  Serial.println("Proceeding ...");
}

void loop() {
  //delay(1500);
  //Serial.println("Top");
  //delay(1500);
  char key = keypad.getKey();
  

  if (key) {
    Serial.print("Key Pressed: ");
    Serial.println(key);
  }
  // else {
  //   Serial.println("No key press??");
  // }
}
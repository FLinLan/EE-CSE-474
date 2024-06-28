// Filename: Lab1Part2.ino
// Author: Max Lan
// Date: 06/20/2024
// Description: This file controls the blinking of a single LED on the breadboard
//              using Arduino Nano ESP32
void setup() {
  // put your setup code here, to run once:
  pinMode(D2, OUTPUT); // configure the D2 pin as an output on the microcontroller (used for LED)
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D2, HIGH); // setting the value of the D2 pin to HIGH (turning on)
  delay(1000); // delay for 1000ms to enable the blinking pattern
  digitalWrite(D2, LOW); // setting the value of the D2 pin to LOW (turning off)
  delay(1000); // delay for 1000ms to enable the blinking pattern
}

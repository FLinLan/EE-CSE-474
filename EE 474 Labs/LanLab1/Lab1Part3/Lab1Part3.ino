// Filename: Lab1Part3.ino
// Author: Max Lan
// Date: 06/20/2024
// Description: This file controls the blinking of the 2 LEDs in different patterns and at different times.
void setup() {
  // put your setup code here, to run once:
  pinMode(D2, OUTPUT); // configure the D2 pin as an output on the microcontroller
  pinMode(D3, OUTPUT); // configure the D3 pin as an output on the microcontroller
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D2, HIGH); // setting the value of the D2 pin to HIGH (turning on)
  digitalWrite(D3, HIGH); // setting the value of the D3 pin to HIGH (turning on)
  delay(500); // delay for 500ms to enable the blinking pattern

  digitalWrite(D3, LOW); // setting the value of the D2 pin to LOW (turning off)
  delay(500); // delay for 500ms to allow LEDs blinking at a different freqeuncy

  digitalWrite(D2, LOW); // setting the value of the D3 pin to LOW (turning off)
  delay(500); // delay for 500ms to allow LEDs blinking at a different freqeuncy
}

// Filename: Lab1Part4.ino
// Author: Max Lan
// Date: 06/20/2024
// Description: This file controls the external LED with a tactile switch such that if button is pressed, the LED turns on, else 
//              the LED remains turned off.
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(D2, OUTPUT); // configure the D2 pin as an output on the microcontroller (used for LED)
  pinMode(D6, INPUT_PULLUP); // configure the D6 pin as an input active HIGH on the microcontroller (used for tactile switch)
}

void loop() {
  // put your main code here, to run repeatedly:
  int push = digitalRead(D6); // initializing the push variable based on state of the tactile switch (starting at active HIGH)
  
  // conditional to light up the LED when the switch is pressed, and remains off it not.
  if (push) {
    digitalWrite(D2, LOW); // setting the value of the D2 pin to LOW (turning off)
  } else {
    digitalWrite(D2, HIGH); // setting the value of the D2 pin to HIGH (turning on)
  }
}

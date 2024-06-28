void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(D2, OUTPUT); // red
  pinMode(D3, OUTPUT); // blue
  pinMode(D7, INPUT_PULLUP);
  pinMode(D8, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(D2), blink, CHANGE);
  attachInterrupt(digitalPinToInterrupt(D3), blink, CHANGE);
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

void blink() {
  state = !state;
}

/*
const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}

void loop() {
  digitalWrite(ledPin, state);
}

void blink() {
  state = !state;
}
*/
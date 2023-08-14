#include <Arduino.h>

const int interruptPin = 7;       // Input D7 (= GPIO19)

void setup() {
  Serial.begin(9600);      // initialize serial communication
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), onInterrupt, CHANGE);
  Serial.println("started ");
}

void onInterrupt() {
  Serial.println("onInterrupt  ");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("test ");
}
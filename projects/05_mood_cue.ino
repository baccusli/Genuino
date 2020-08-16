#include <Servo.h>

Servo myServo;

int const potPin = A0;
int potVal;
int rotation;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println("Potentiometer Value: " + String(potVal));
  rotation = map(potVal, 0, 1023, 0, 179);
  Serial.println("Potentiometer Angle: " + String(rotation));
  myServo.write(rotation);
  delay(100);
}

// Genuino Project 02: Spaceship Interface

int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
  if (switchState == LOW) {
    digitalWrite(3, LOW); // green light
    digitalWrite(4, HIGH); // red light
    digitalWrite(5, HIGH); // red light
  } else {
    digitalWrite(3, HIGH); // green light
    delay(250);
    digitalWrite(3, LOW); // green light
    digitalWrite(4, LOW); // red light
    digitalWrite(5, HIGH); // red light
    delay(250);
    digitalWrite(3, LOW); // green light
    digitalWrite(4, HIGH); // red light
    digitalWrite(5, LOW); // red light
    delay(250);
    digitalWrite(3, HIGH); // green light
  }
}

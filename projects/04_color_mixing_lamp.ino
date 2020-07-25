const int redLEDPin = 10;
const int greenLEDPin = 9;
const int blueLEDPin = 11;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);
  redValue = redSensorValue/4;
  greenValue = greenSensorValue/4;
  blueValue = blueSensorValue/4;
  Serial.println("--------------------------------------------------");
  Serial.println("Raw Sensor Values");
  Serial.println("Red: ");
  Serial.println(redSensorValue);
  Serial.println("Green: ");
  Serial.println(greenSensorValue);
  Serial.println("Blue: ");
  Serial.println(blueSensorValue);
  Serial.println("Mapped Sensor Values");
  Serial.println("Red: ");
  Serial.println(redValue);
  Serial.println("Green: ");
  Serial.println(greenValue);
  Serial.println("Blue: ");
  Serial.println(blueValue);
  Serial.println("--------------------------------------------------");
  analogWrite(redLEDPin, redValue);
  analogWrite(greenLEDPin, greenValue);
  analogWrite(blueLEDPin, blueValue);
}

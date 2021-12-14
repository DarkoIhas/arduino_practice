#include <Servo.h>

int lightPin = A0;
int lightVal;
int servoPin = 9;
float servoPos;
int dv = 100;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
pinMode(lightPin, INPUT);
pinMode(servoPin, OUTPUT);
myServo.attach(servoPin);
Serial.begin(57600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPin);
Serial.println(lightVal);
delay(dv);
servoPos = (140./1023.)*lightVal;
myServo.write(servoPos);
}

int testLed = 13;
int del = 1000;
void setup() {
  // put your setup code here, to run once:
pinMode(testLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(testLed, HIGH);
delay(del);
digitalWrite(testLed, LOW);
delay(del);
}

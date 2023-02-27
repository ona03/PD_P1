#include <Arduino.h>

const int potPin = 15;
int potValue = 0;
float temp = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("hello world");
  pinMode(23, OUTPUT);

  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(23, HIGH);  
  delay(1000);                  
  digitalWrite(23, LOW);  
  delay(1000);

  potValue = analogRead(potPin);
  Serial.println(potValue);
  
  temp=temperatureRead();
  Serial.println(temp);
  delay(500);
}
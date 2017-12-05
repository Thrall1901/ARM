

#include <Servo.h>

Servo myservo;  
Servo yourservo;
Servo itservo;
Servo theirservo;
Servo allservo;

int potpin = 0;  
int acepin = 1;
int bipin = 2;
int tranpin = 3;
int demipin = 4;
int val;    
int va;
int valv;
int value;
int v;

void setup() {
  myservo.attach(9);  
  yourservo.attach(10);
  itservo.attach(11);
  theirservo.attach(12);
  allservo.attach(13);
}

void loop() {
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);     
  myservo.write(val);                  
  delay(15);                           
  
  va = analogRead(acepin);
  va = map(va, 0, 1023, 0, 180);
  yourservo.write(va);
  delay(15);
  
  valv = analogRead(bipin);
  valv = map(valv, 0, 1023, 0, 180);
  itservo.write(valv);
  delay(15);
  
  value = analogRead(tranpin);
  value = map(value, 0, 1023, 0, 180);
  theirservo.write(value);
  delay(15);
  
  v = analogRead(demipin);
  v = map(v, 0, 1023, 0, 180);
  allservo.write(v);
  delay(15);
}


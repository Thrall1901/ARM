

#include <Servo.h>

Servo myservo;  
Servo yourservo;
Servo itservo;
Servo allservo;

int potpin = 0;  
int acepin = 1;
int bipin = 2;
int demipin = 4;
int val;    
int va;
int valv;
int v;

void setup() {
  myservo.attach(9);  
  yourservo.attach(10);
  itservo.attach(11);
  allservo.attach(6);
}

void loop() {
  val = analogRead(potpin);            
  val = map(val, 0, 1024, 0, 180);     
  myservo.write(val);                  
                             
  
  va = analogRead(acepin);
  va = map(va, 0, 1024, 0, 180);
  yourservo.write(va);
  
  
  valv = analogRead(bipin);
  valv = map(valv, 0, 1024, 0, 180);
  itservo.write(valv);
  
  
  
  v = analogRead(demipin);
  v = map(v, 0, 1024, 0, 180);
  allservo.write(v);
 
}


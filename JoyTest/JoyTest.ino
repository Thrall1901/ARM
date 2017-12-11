#include <Servo.h>

Servo test;

int ud = 0;
int rea;
void setup() {
  // put your setup code here, to run once:
test.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
rea = analogRead(ud);
rea = map(rea, 0, 1024, 0, 180);
test.write(rea);
delay(15);
}

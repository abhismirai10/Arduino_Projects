#include <Servo.h>
Servo myServo;
int speed;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(9,1000,2000);


}

void loop() {
  speed=analogRead(A0);
  speed=map(speed,0,1023,0,180);
  myServo.write(speed);
  Serial.println(speed);
}

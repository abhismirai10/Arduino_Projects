#include <Servo.h>
Servo servo01;
Servo servo02;
int xpin=A2;
int ypin=A4;
int xservo=9;
int yservo=10;
void setup() {
  // put your setup code here, to run once:
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
Serial.begin(9600);
servo01.attach(xservo);
servo02.attach(yservo);
pinMode(5, INPUT);
digitalWrite(5, 1);
pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int readxpin=analogRead(xpin);
int readypin=analogRead(ypin);
int i = digitalRead(5);
Serial.print(i);
if (i==1){
  digitalWrite(3, 0);
}
if (i==0){
  digitalWrite(3, 1);
}
int angle01=map(readxpin, 0, 1023, 45, 135);
int angle02=map(readypin, 0, 1023, 45, 135);
Serial.print(" angle01 ");
Serial.print(angle01);
Serial.print(" readxpin ");
Serial.print(readxpin);
Serial.print(" angle02 ");
Serial.print(angle02);
Serial.print(" readypin ");
Serial.println(readypin);


servo01.write(angle01);
servo02.write(angle02);
}

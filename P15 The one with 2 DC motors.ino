int Speedpin1=5;
int Speedpin2=6;
int dir11=2;
int dir12=3;
int dir21=7;
int dir22=8;
int joyx=A0;
int joyy=A2;
int joyb=12;

void setup() {
  // put your setup code here, to run once:
pinMode(Speedpin1, OUTPUT);
pinMode(Speedpin2, OUTPUT);
pinMode(dir11, OUTPUT);
pinMode(dir21,OUTPUT);
pinMode(dir12, OUTPUT);
pinMode(dir22,OUTPUT);
pinMode(joyx,INPUT);
pinMode(joyy,INPUT);
pinMode(joyb,INPUT);
Serial.begin(9600);
digitalWrite(joyb, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
// Serial.print(digitalRead(dir1));
// Serial.print(" ");
// Serial.println(digitalRead(dir2));
int x1=analogRead(joyx);
int y1=analogRead(joyy);
int mSpeed1 = map(x1, 0, 1023, -155, 155);
int mSpeed2 = map(y1, 0, 1023, -155, 155);
if (mSpeed1<0){
  digitalWrite(dir11, 1);
  digitalWrite(dir12, 0);
  analogWrite(Speedpin1, -1*(mSpeed1-100));
}
if (mSpeed1>0){
  digitalWrite(dir11, 0);
  digitalWrite(dir12, 1);
  analogWrite(Speedpin1, mSpeed1+100);
}
if (mSpeed2<0){
  digitalWrite(dir21, 1);
  digitalWrite(dir22, 0);
  analogWrite(Speedpin2, -1*(mSpeed2-100));
}
if (mSpeed2>0){
  digitalWrite(dir21, 0);
  digitalWrite(dir22, 1);
  analogWrite(Speedpin2, mSpeed2+100);
}
// Serial.print();
// Serial.print("  ");
// Serial.println(analogRead(joyy));
}

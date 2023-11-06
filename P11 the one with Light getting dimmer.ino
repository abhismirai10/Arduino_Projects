int i=0;
int hs;
int ls;
void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
pinMode(9, INPUT);
pinMode(10, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
hs=digitalRead(9);
ls=digitalRead(10);
Serial.println(i);
if (hs==0){
  analogWrite(5, i);
  if (i<255){
  i++;
  }
  delay(5);
}
if (ls==0){
  analogWrite(5,i);
  if (i>0){
  i--;
  }
  delay(5);
}
}

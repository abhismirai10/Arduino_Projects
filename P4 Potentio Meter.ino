int pinI=A2;
float j;
int waitT=750;
int pinO=9;
void setup() {
  // put your setup code here, to run once:
pinMode (pinI, INPUT);
pinMode (pinO, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
j=(5./1023.)*analogRead(pinI);
Serial.println(j);
if(j<4.0){
  digitalWrite(pinO,0);
}
if(j>4.0){
  digitalWrite(pinO,1);
}
delay(waitT);
}

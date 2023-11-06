int lp=1;
int np;
int light=0;
void setup() {
  // put your setup code here, to run once:
pinMode(10, INPUT);
pinMode(5, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
np=digitalRead(10);
Serial.println(np);
if(np>lp){
  if(light==0){
    digitalWrite(5, 1);
    light=1;
  }
  else if (light==1) {
    digitalWrite(5,0);
    light=0;
  }
}
lp=np;
}

int r1pin=4;
int r2pin=5;
int r3pin=6;
int r4pin=7;
int d=400;
void setup() {
  // put your setup code here, to run once:
pinMode(r1pin, OUTPUT);
pinMode(r2pin, OUTPUT);
pinMode(r3pin, OUTPUT);
pinMode(r4pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0; i<2 ;i++){
  digitalWrite(r4pin,i);
  
  for(int i=0; i<2 ;i++){
    digitalWrite(r3pin,i);
    
    for(int i=0; i<2 ;i++){
      digitalWrite(r2pin,i);
      
      for(int i=0; i<2; i++) {
        digitalWrite(r1pin,i);
        delay (d);
        digitalWrite(r1pin,i);
        delay (d);
      }
    }
  }
}
}


int light;
float n;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  light = analogRead(A0);
  Serial.println(light);
  n=(light*(9940/1023))+60;
  Serial.println(n);
  
  digitalWrite(6, 1);
  delayMicroseconds(n);
  digitalWrite(6,0);
  delayMicroseconds(n);
}

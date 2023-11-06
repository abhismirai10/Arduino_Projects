float n;
void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
pinMode(10, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
n=analogRead(A0);
digitalWrite(10, HIGH);
delayMicroseconds(n*(9940/1023));
digitalWrite(10, LOW);
delayMicroseconds(n*(9940/1023));
Serial.println(n*(9940/1023));
}

String msg = "What is your favirout color";
String s;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(msg);
  while (Serial.available() == 0) {
  }
  s = Serial.readString();
  Serial.print(s);
  if (s == "red") {
    digitalWrite(6, 1);
    digitalWrite(5, 0);
    digitalWrite(7, 0);
  }
  if (s == "blue") {
    digitalWrite(6, 0);
    digitalWrite(5, 0);
    digitalWrite(7, 1);
  }
  if (s == "yellow") {
    digitalWrite(6, 0);
    digitalWrite(5, 1);
    digitalWrite(7, 0);
  }
}

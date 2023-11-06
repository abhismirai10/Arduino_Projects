int REDpin = 5;
int Ypin=3;
int i;
void setup() {
  // put your setup code here, to run once:
pinMode(REDpin,OUTPUT);
pinMode(Ypin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (i=0;i<3;i++)
{
  digitalWrite(Ypin,1);
  delay(500);
  digitalWrite(Ypin,0);
  delay(500);
}
for (i=0;i<5;i++)
{
  digitalWrite(REDpin,1);
  delay(500);
  digitalWrite(REDpin,0);
  delay(500);
}
}

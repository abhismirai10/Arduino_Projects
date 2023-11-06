#include <IRremote.hpp>

int IRpin = 5;
IRrecv IR(IRpin);
decode_results cmd;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IR.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
  while (IR.decode(&cmd)==0)
  {

  }
  Serial.println(cmd.value,HEX);
  delay(1500);
  IR.resume();
}

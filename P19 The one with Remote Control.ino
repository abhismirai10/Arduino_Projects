#include <IRremote.hpp>

int IRpin = 9;

IRrecv IR(IRpin);
decode_results cmd;
void setup()
{
  IR.enableIRIn();  // Start the receiver
  Serial.begin(9600);
}

void loop() {
  while (IR.decode(&cmd)==0) {
  }
Serial.println(cmd.value, HEX);
delay(1500);
IR.resume();
}

#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.clear();
delay(3000);
lcd.setCursor(0,0);
lcd.print("Hello World!!!");
lcd.setCursor(0, 1);
lcd.print("What's UP");
delay(3000);
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("I am Abhi's new");
lcd.setCursor(0, 1);
lcd.print("AI, MIRAI ");
delay(5000);
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("let's make ");
lcd.setCursor(0, 1);
lcd.print("the World");
delay(3000);
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("a Better Place...");
delay(10000);

}

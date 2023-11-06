float sin1;
float cos1;
float j;
float pi= 3.14;

void setup()
{
Serial.begin(9600);
}

void loop(){

for (j=0; j<2*pi; j=j+0.1) {
sin1 = sin(10*j) + 10*cos(j);
cos1=cos(j);
Serial.println(j*j);
// Serial.print(",");
// Serial.println(sin1*sin1 + 4*sin1);
delay(100);
}
}
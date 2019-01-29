#include<String.h>
int w;
String otp;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
    otp="";
    int i=0; 
    for(i=0;i<6;i++)
    {
      w=random(10);
      otp+=w;
    }
    Serial.println("otp form is " + otp);
  delay(1000);

}

#include <Servo.h>
Servo S1;
Servo S2;
Servo S3;
int pos;
const int SERVO1pin = 11;

const int SERVO2pin = 12;
const int SERVO3pin = 10;
const int DCpin1 = 3;
const int DCpin2 = 4;

void setup()
{
  S1.attach(SERVO1pin);
  S2.attach(SERVO2pin);
  S3.attach(SERVO3pin);
  pinMode(DCpin1,OUTPUT);
  pinMode(DCpin2,OUTPUT);
  Serial.begin(9600);  
}

void loop()
{
  char data=0;
  if(Serial.available()>0)
  {
    data=Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if(data=='1')
    {
      {
        for (pos = 15; pos <= 105; pos += 1)
        S1.write(pos);
      }
        delay(13000); 
      {
        for (pos = 105; pos >= 15; pos -= 1)
        S1.write(pos);
      }
    }

  
    else if(data=='2')
    {
      {
        for (pos = 20; pos <= 110; pos += 1)
        S2.write(pos);
      }
        delay(13000);
      {
        for (pos = 110; pos >= 20; pos -= 1)
        S2.write(pos);
      }       
    }

  
    else if(data=='3')
    {
      {
        for (pos = 90; pos >= 0; pos -= 1)
        S3.write(pos);
      }
        delay(13000); 
      {
        for (pos = 0; pos <= 90; pos += 1)
        S3.write(pos);
      }
    }
    delay(1000);
    digitalWrite(DCpin1,LOW);
    digitalWrite(DCpin2,HIGH);
    delay(3000);
    digitalWrite(DCpin1,LOW);
    digitalWrite(DCpin2,LOW);
  }   
}

#include <Servo.h>
#include <Keypad.h>

Servo myservo;
char customKey;

const byte ROWS = 4;
const byte COLS = 4;

int angle[5]={30,60,90,120,150};
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};


byte rowPins[ROWS] = {9,8, 7, 6};
byte colPins[COLS] = {5,4, 3, 2};


Keypad customKeypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  myservo.attach(11);
  Serial.begin(9600);
}

void loop() {
  int rno = random(1,5);
  Serial.println(rno);
  delay(200);
  myservo.write(angle[rno]);


  customKey = customKeypad.getKey();
  while (customKey == NO_KEY) {
    customKey = customKeypad.getKey();
  }

 //Serial.println(customKey);

if((customKey-'0')==rno)
{
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
    Serial.println("RIGHT");


}
else
{
  Serial.println("wrong");
}
  
}

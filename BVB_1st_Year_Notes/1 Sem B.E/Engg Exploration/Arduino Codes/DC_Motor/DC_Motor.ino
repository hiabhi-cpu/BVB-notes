void setup() 
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() 
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(5,LOW); 
  digitalWrite(6,LOW);
  digitalWrite(11,LOW); 
  digitalWrite(12,LOW);
  delay(2000);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  delay(2000);
  digitalWrite(5,LOW); 
  digitalWrite(6,LOW);
  digitalWrite(11,LOW); 
  digitalWrite(12,LOW);
  delay(2000);
  
}

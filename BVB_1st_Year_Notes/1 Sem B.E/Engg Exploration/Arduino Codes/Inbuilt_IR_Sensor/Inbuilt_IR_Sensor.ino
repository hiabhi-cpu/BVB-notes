void setup() {
  pinMode(5,INPUT);
  Serial.begin(9600);
}
void loop() {
  int i;
  i=digitalRead(5);
  if (i=0)
  {
    Serial.println("0");
    
  }
  else if (i==1);
  Serial.println("1");
}

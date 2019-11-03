  
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{
  int read= digitalRead(8);
  if(read==HIGH){
    digitalWrite(13,LOW);
  }
  else{
    digitalWrite(13,HIGH);
  }
}
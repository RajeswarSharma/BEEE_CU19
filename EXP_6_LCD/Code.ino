#include<LiquidCrystal.h>
int i=0;
float dist;
 LiquidCrystal lcd(2,3,4,5,6,7);
void setup()
{
  
 pinMode(12,OUTPUT);
  pinMode(11,INPUT);
  lcd.begin(16,2);
    lcd.print("Distance :" );
}

void loop()
{
digitalWrite(12,HIGH);
delayMicroseconds(10);
digitalWrite(12,LOW);
i=pulseIn(11,HIGH);
  dist= (0.034*i)/2;  
lcd.setCursor(0,1);
lcd.print(dist);
lcd.setCursor(6,1);
lcd.print("cms");
lcd.setCursor(10,1);


delay(100);
}
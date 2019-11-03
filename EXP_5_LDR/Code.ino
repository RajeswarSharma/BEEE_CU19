int ldr;
const int ledPin = 13;
const int ldrPin = A0;

void setup() {

Serial.begin(9600);
pinMode(ledPin, OUTPUT);

}

void loop() {
 ldr = analogRead(ldrPin);

if (ldr<= 200) {

digitalWrite(ledPin, HIGH);
Serial.println(ldr);

} else {

digitalWrite(ledPin, LOW);
Serial.println(ldr);
}

}
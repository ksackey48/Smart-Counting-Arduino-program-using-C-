int startValue=5;
int ledPin=13;
void flashLED(int blinkTime)
{
  for(int i=0;i<blinkTime;i++){
    digitalWrite(ledPin,HIGH);
    delay(300);

    digitalWrite(ledPin,LOW);
    delay(300);
  }
  
}
void setup() {
pinMode(ledPin,OUTPUT);
Serial.begin(9600);

Serial.println("--Smart Countdown Starting---");

int count=startValue;

while (count>=1){
  Serial.print("Count :");
  Serial.println(count);

  flashLED(count);
  delay(1000);
  count=count-1;
}

Serial.println("---Countdown complete--");
}

void loop() {
  // put your main code here, to run repeatedly:

}

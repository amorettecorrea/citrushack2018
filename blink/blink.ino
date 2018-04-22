int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;

void setup()
{
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
}




  
void blink(int pin){
  digitalWrite(pin, HIGH);
  delay(1000);

  digitalWrite(pin, LOW);
  delay(1000);
 
}

void loop()
{
  blink(ledPin1);
  blink(ledPin2);
  blink(ledPin3);

  
}

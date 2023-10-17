const int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  dot();
  dot();
  dot();
  delay(1000); 


  dash();
  dash();
  dash();
  delay(1000); 

 
  dot();
  dot();
  dot();
  delay(2000); 
}

void dot() {
  digitalWrite(ledPin, HIGH);
  delay(250); 
  digitalWrite(ledPin, LOW);
  delay(250); 
}

void dash() {
  digitalWrite(ledPin, HIGH);
  delay(1000); 
  digitalWrite(ledPin, LOW);
  delay(250); 
}

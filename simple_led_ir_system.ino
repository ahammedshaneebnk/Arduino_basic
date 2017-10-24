int usSensor = 12;
int ledPinP1 = 11;
int ledPinN1 = 10;
int ledPinP2 = 9;
int ledPinN2 = 8;
int ledPinP3 = 7;
int ledPinN3 = 6;
int ledPinP4 = 5;
int ledPinN4 = 4;
int ledPinP5 = 3;
int ledPinN5 = 2;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(usSensor, INPUT);
pinMode(ledPinP1, OUTPUT);
pinMode(ledPinN1, OUTPUT);
pinMode(ledPinP2, OUTPUT);
pinMode(ledPinN2, OUTPUT);
pinMode(ledPinP3, OUTPUT);
pinMode(ledPinN3, OUTPUT);
pinMode(ledPinP4, OUTPUT);
pinMode(ledPinN4, OUTPUT);
pinMode(ledPinP5, OUTPUT);
pinMode(ledPinN5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int inValue = digitalRead(usSensor);
if (inValue == 0)
  {
    digitalWrite(ledPinP1, LOW);
    digitalWrite(ledPinP2, LOW);
    digitalWrite(ledPinN3, LOW);
    digitalWrite(ledPinP4, LOW);
    digitalWrite(ledPinN5, LOW);
    }
 else
 {
    digitalWrite(ledPinP1, HIGH);
    digitalWrite(ledPinN1, LOW);
    delay(100);
    digitalWrite(ledPinP1, LOW);

    digitalWrite(ledPinP2, HIGH);
    digitalWrite(ledPinN2, LOW);
    delay(100);
    digitalWrite(ledPinP2, LOW);
    
    digitalWrite(ledPinP3, HIGH);
    digitalWrite(ledPinN3, LOW);
    delay(100);
    digitalWrite(ledPinP3, LOW); 
    
    digitalWrite(ledPinP4, HIGH);
    digitalWrite(ledPinN4, LOW);
    delay(100);
    digitalWrite(ledPinP4, LOW);
    
    digitalWrite(ledPinP5, HIGH);
    digitalWrite(ledPinN5, LOW);
    delay(100);
    digitalWrite(ledPinP5, LOW);    
  }
  delay(50);
}

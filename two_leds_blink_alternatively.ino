void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//code to start serial monitor
  pinMode(8, OUTPUT);//digital pin 8 is set as output[+ve of led-1]
  pinMode(9, OUTPUT);//digital pin 9 is set as output[-ve of led-1]
  pinMode(10, OUTPUT);//digital pin 10 is set as output[+ve of led-2]
  pinMode(11, OUTPUT);//digital pin 11 is set as output[-ve of led-2]
}

void loop() {
  //code to run repeatedly:
  //led-1 on
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  //led-2 off
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  //serial monitor display text
  Serial.print("LED-1 ON\tLED-2 OFF\n");
  //WAIT HALF SECOND
  delay(500);//in braces, time is specified in milliseconds
  //led-1 off
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  //led-2 on
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  //serial monitor display text
  Serial.print("LED-1 OFF\tLED-2 ON\n");
  //WAIT HALF SECOND
  delay(500);//in braces, time is specified in milliseconds
}

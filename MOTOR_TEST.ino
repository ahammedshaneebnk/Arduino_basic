int m1a = 9, m1b = 8, m2a = 4, m2b = 3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(m1a, OUTPUT);
pinMode(m1b, OUTPUT);
pinMode(m2a, OUTPUT);
pinMode(m2b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
//  //ONE
//                        digitalWrite(m1a, HIGH);
//                        digitalWrite(m1b, LOW);
//                        digitalWrite(m2a, HIGH);
//                        digitalWrite(m2b, LOW);

//  //TWO
//                        digitalWrite(m1a, HIGH);
//                        digitalWrite(m1b, LOW);
//                        digitalWrite(m2a, LOW);
//                        digitalWrite(m2b, HIGH);

//  //THREE
//                        digitalWrite(m1a, LOW);
//                        digitalWrite(m1b, HIGH);
//                        digitalWrite(m2a, HIGH);
//                        digitalWrite(m2b, LOW);

//  //FOUR
//                        digitalWrite(m1a, LOW);
//                        digitalWrite(m1b, HIGH);
//                        digitalWrite(m2a, LOW);
//                        digitalWrite(m2b, HIGH);

  //FIVE
                        digitalWrite(m1a, LOW);
                        digitalWrite(m1b, LOW);
                        digitalWrite(m2a, LOW);
                        digitalWrite(m2b, LOW);
}

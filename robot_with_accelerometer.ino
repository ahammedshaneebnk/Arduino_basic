int xPin = A1;
int yPin = A0;
int xRest, yRest, xRead, yRead;
int m1a = 9, m1b = 8, m2a = 4, m2b = 3;

void setup() {
  Serial.begin(9600);
  delay(1000);
  xRest = analogRead(xPin);
  yRest = analogRead(yPin);
  Serial.println(xRest);
  Serial.println(yRest);
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  pinMode(A0, INPUT);
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int xRead = analogRead(xPin);
  int yRead = analogRead(yPin);
  Serial.print(xRead);
  Serial.print("\t");
  Serial.println(yRead);
  
                    if ((xRead < 270) && (yRead > 300))
                      {
                        //go straight
                        digitalWrite(m1a, HIGH);
                        digitalWrite(m1b, LOW);
                        digitalWrite(m2a, LOW);
                        digitalWrite(m2b, HIGH);
                        }
                    else if ((xRead > 350) && (yRead > 300))
                      {
                        //go back
                        digitalWrite(m1a, LOW);
                        digitalWrite(m1b, HIGH);
                        digitalWrite(m2a, HIGH);
                        digitalWrite(m2b, LOW);
                        }
                    else if ((xRead > 300) && (yRead > 380))
                      {
                        //turn to right
                        digitalWrite(m1a, LOW);
                        digitalWrite(m1b, HIGH);
                        digitalWrite(m2a, LOW);
                        digitalWrite(m2b, HIGH);
                        }
                    else if ((xRead > 290) && (yRead < 280))
                      {
                        //turn to left
                        digitalWrite(m1a, HIGH);
                        digitalWrite(m1b, LOW);
                        digitalWrite(m2a, HIGH);
                        digitalWrite(m2b, LOW);
                        }
                    else
                      {
                        //stops
                        digitalWrite(m1a, LOW);
                        digitalWrite(m1b, LOW);
                        digitalWrite(m2a, LOW);
                        digitalWrite(m2b, LOW);
                        }
                        
  delay (50);     
}

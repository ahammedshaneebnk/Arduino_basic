int xPin = A1;
int yPin = A0;
int xRest, yRest, xRead, yRead;
double Gx, Gy;

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
}

void loop() {
  // put your main code here, to run repeatedly:
  int xRead = analogRead(xPin);
  int yRead = analogRead(yPin);
//  Gx = xRead / 67.584;
//  Gy = yRead / 67.584;
  Serial.print(xRead);
  Serial.print("\t");
  Serial.println(yRead);
                        
  delay (50);     
}

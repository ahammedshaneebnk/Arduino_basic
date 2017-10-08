void setup() {
  // put your setup code here, to run once:
pinMode(10, INPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int k = digitalRead(10);
if (k==0)
  {
    delay(500);
    Serial.print("No obstacle\n");
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    }
 else
  {
    Serial.print("Obstacle\n");
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    }
}

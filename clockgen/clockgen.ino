void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  pinMode(12, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(12) == LOW) {
    digitalWrite(13, LOW);
    digitalWrite(13, HIGH);
    while (digitalRead(12) == LOW){}
    delay(20);
  }
}

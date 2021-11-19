void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  analogWrite(PB1, 255);
  analogWrite(PD6, 255);
  digitalWrite(12, HIGH);
  delay(5000);
  analogWrite(PD6, 0);
  analogWrite(PB1, 0);
  digitalWrite(12, LOW);
  delay(5000);
  


}

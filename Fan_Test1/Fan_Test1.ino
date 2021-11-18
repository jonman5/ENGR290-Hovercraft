void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
}

void loop() {
  analogWrite(OCR0A, 255);
  digitalWrite(12, HIGH);
  delay(5000);
  analogWrite(OCR0A, 0);
  digitalWrite(12, LOW);
  delay(5000);
}

long range_sensor1, mm;
int output;

void setup() {
  Serial.begin(9600);
  pinMode(PD3, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  
  range_sensor1 = pulseIn(PD3, HIGH);
  mm = range_sensor1;
  Serial.println(mm);
  output = (mm>1100)? 1:0;
  Serial.println(output);
  digitalWrite(12, output);
  delay(100);
}

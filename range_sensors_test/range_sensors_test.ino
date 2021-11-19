long range_sensor1, mm1, range_sensor2, mm2 ;
int output, threshold, distance1, distance2;

void setup() {
  Serial.begin(9600);
  pinMode(PD3, INPUT); //PD3
  pinMode(12, OUTPUT);
  pinMode(PD4, INPUT); //PD4
  pinMode(12, OUTPUT);
}

void loop() {
  //Detect and print distance from range sensor 1
  range_sensor1 = pulseIn(PD3, HIGH);
  mm1 = range_sensor1;
  distance1 = mm1/100; //distance1= distance measured by range sensor 1 in cm
  Serial.println("Sensor 1 distance: " + distance1);

  //Detect and print distance from range sensor 2
  range_sensor2 = pulseIn(PD4, HIGH);
  mm2 = range_sensor2;
  distance2 = mm2/100; //distance2= distance measured by range sensor 2 in cm
  Serial.println("Sensor 2 distance: " + distance2);

  //If distance 1 or distance 2 is less than the threshold distance, turn on LED
  output = ((distance1<threshold)|(distance2<threshold))? 1:0;
  digitalWrite(12, output);
  delay(100);
}

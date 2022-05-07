void setup() {
  pinMode(7,INPUT);
  Serial.begin(9600);
}
void loop(){
  Serial.print("IR Sensor Interrupted");
  Serial.println(digitalRead(7));
  delay(500);
}

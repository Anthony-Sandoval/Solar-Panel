float Voltage =0;
float Voltage_Divider_output =0;
float Voltage_Scale=0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  Voltage_Divider_output=analogRead(A5);
  Voltage_Scale= 0.00488 * (120/20);
  Voltage= Voltage_Scale * Voltage_Divider_output;
  Serial.print(Voltage);
  Serial.println("V")
  delay(500);
}

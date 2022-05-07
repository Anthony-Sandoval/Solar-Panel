int Current_Input=0;
float Current_Amplifier=0;
float amps=0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  {
    Current_Input=analogRead(A4);
  }
    Current_Amplifier= 0.00488/0.185;
    amps= Current_Amplifier * Current_Input - 13.51;
    Serial.print(amps);
    Serial.println("A");
    delay(500);
}

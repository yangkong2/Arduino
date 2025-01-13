void setup ()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
}



void loop ()
{
  int SoundLevel = analogRead(A0);
  Serial.print("Now Small Sound Sensor Value = ");
  Serial.println(SoundLevel);

  delay(300);
}s
//디지털 값과 아날로그 값을 시리얼 프린트로 볼 수 있도록 합니다. 
void setup()
{
  pinMode(6, INPUT);
  Serial.begin(9600);

}

void loop()
{
  Serial.print("디지털리드 : ");
  Serial.print(digitalRead(6));
  Serial.print(" / 아날로그리드 : ");
  Serial.println(analogRead(6));
  delay(10); // Delay a little bit to improve simulation performance
}
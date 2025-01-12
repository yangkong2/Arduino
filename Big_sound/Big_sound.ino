void setup()
{
 Serial.begin(9600); // 시리얼 통신 초기화
 pinMode(A0, INPUT);
}

void loop()
{
 int adcValue = analogRead(A0);
 Serial.println(adcValue);
}
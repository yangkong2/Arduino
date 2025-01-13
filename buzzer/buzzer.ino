int buzzerPin = 8;
void setup() {
  pinMode(buzzerPin, OUTPUT); // 부저 핀을 출력으로 설정
}

void loop()
{
  digitalWrite(buzzerPin, HIGH); // 부저 켜기
  delay(500); // 0.5초 동안 기다리기
  digitalWrite(buzzerPin, LOW); // 부저 끄기
  delay(500);
}
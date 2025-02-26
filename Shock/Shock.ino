void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);      // 시리얼 모니터 속도 설정
  pinMode(9, INPUT);    // 센서 출력 연결 포트 설정
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(9) == LOW)
  {
    Serial.println(" Detected");
  }
  else
  {
    Serial.print("--");
  }
  delay(50);
}
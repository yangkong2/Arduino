void setup() {
  pinMode(7, INPUT_PULLUP); // 내부 풀업 저항 활성화
  pinMode(10, OUTPUT);      // 출력 모드 10 설정
}

void loop() {
  if (digitalRead(7) == LOW) { // 버튼이 눌렸을 때
    digitalWrite(10, HIGH);    // LED ON
  } else {
    digitalWrite(10, LOW);     // LED OFF
  }
}

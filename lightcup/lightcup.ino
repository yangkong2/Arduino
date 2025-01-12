int pinLed = 11;                        // Data Pin 11을 LED 제어 핀으로 선언
int pinInput = 10;                      // Data Pin 10을 Light Cup 제어 핀으로 선언
int stateA = 0;                         // Light Cup 상태 저장 변수
int brightness = 0;                     // 현재 발광 값 저장 변수
int oldBrightness = 0;                  // 이전 발광 값 저장 변수
void setup() {
  Serial.begin(9600);                    // 시리얼 모니터 시작
  pinMode(pinLed, OUTPUT);            // LED 제어 핀(GPIO Pin 11)을 출력으로 설정
  pinMode(pinInput, INPUT);            // Light Cup 제어 핀(GPIO Pin 10)을 입력으로 설정
  digitalWrite(pinInput, HIGH);           // Light Cup 제어 핀(GPIO Pin 10)을 기본 high로 설정
}
void loop() { 
  stateA = digitalRead(pinInput);               // Light Cup interface에서 값을 읽음 (GPIO State)
  if (stateA == HIGH && brightness < 255)   // 조건이 맞을 경우
    brightness++;                             // brightness을 1 증가
  if (stateA == LOW && brightness > 0)      // 조건이 맞을 경우
    brightness--;                              // brightness을 1 감소
  if (oldBrightness != brightness)              // brightness 현재와 이전 값이 다른 경우
  {
    Serial.print("brightness:");                  // 시리얼로 brightness 값 출력
    Serial.println(brightness);
  }
  oldBrightness = brightness;                 // brightness 이전 값을 현재 값으로 업데이트
  analogWrite(pinLed, brightness);             // brightness 값을 이용하여 LED 밝기 조절
  delay(10);
}
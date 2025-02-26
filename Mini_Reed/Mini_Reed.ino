/*
  아두이노 초급 키트 37종 예제
  20. UNO 와 미니 리드 스위치 모듈 예제
*/

void setup()
{
  Serial.begin(9600);     // 시리얼 통신 9600bps로 설정

  Serial.println("======================================");
  Serial.println("Arduino Basic Kits");
  Serial.println("Examples - 20. MINI reed switch Module");
  Serial.println("======================================");
  Serial.println("");

  pinMode(13, OUTPUT);    // 내장 LED 설정
	pinMode(3, INPUT);      // MINI reed 모듈 
  digitalWrite(13, HIGH); 
  
}

int reed_status;

void loop()
{
  reed_status = digitalRead(3);
  Serial.print("자기장의 자력 = ");
  Serial.println(reed_status, DEC);
 
  if(reed_status == 0) {
    digitalWrite(13, HIGH); 
  } else {
    digitalWrite(13, LOW); 
  }
  delay(500);
}

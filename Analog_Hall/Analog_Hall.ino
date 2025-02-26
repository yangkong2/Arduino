/*
 중요한 아두이노 센서키트 37종 예제 중 31 번째
 UNO 와 홀 마그네틱 감지 센서 예제입니다.

 37종 센서: https://kit128.com/goods/view?no=114
 UNO R3 : https://kit128.com/goods/view?no=337

 출처: http://whiteat.com/Arduino
*/ 

int S = A0; // INPUT PIN

// 프로그램 시작 - 초기화 작업
void setup()
{
 Serial.begin(9600); // 시리얼 통신 초기화
 Serial.println("Arduino Examples - Hall Magnetic Sensor");
 Serial.println(" https://docs.whiteat.com/?p=1290");
 pinMode(S, INPUT); 
}

void loop()
{
 Serial.print("S="); Serial.println(analogRead(S), DEC);
 delay(100);
}
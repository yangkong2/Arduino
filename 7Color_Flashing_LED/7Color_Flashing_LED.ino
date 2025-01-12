void setup () {                 
pinMode (13, OUTPUT);    // LED 제어 핀(GPIO Pin 13)을 출력으로 설정 
}
void loop () {  
digitalWrite(13, HIGH);     // LED On  
delay(2000);    
digitalWrite(13, LOW);      // LED Off  
delay(2000); 
}
int DValue = 0;
int AValue = 0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop() {
  DValue = digitalRead(6);
  AValue = analogRead(A0);

  Serial.print("digita Value: ");
  Serial.print(DValue, DEC);
  Serial.print("/ analog Value: ");
  Serial.print(AValue, DEC);
  delay(100);
}

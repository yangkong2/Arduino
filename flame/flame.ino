int DValue = 0;
int AValue = 0;

void setup () {
  pinMode(A0, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop() {
  int Dvalue = digitalRead(6);
  int Avalue = analogRead(A0);

  Serial.print("digita Value: ");
  Serial.print(Dvalue, DEC);
  Serial.print("/analog Value: ");
  Serial.println(Avalue, DEC);
  delay(100);
}
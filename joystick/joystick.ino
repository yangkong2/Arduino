int DValue = 0;
int AValue = 0;

void set up () {
  pinMode(A0, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop() {
  Dvalue = digittlaRead(6);
  Avalue = analogReal(A0);

  Serial.print("digita Value: ");
  Serial.print(Dvalue, DEC);
  Serial.print("/analog Value: ");
  Serial.println(Avalue, DEC);
  delay(100);
}
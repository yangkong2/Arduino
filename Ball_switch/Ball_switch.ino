int Value = 0;

void setup() {
  pinMode (A0, INPUT);
  Serial.begin (9600);
}

void loop() {
  Value = analogRead(A0);

  Serial.print ("Value: ");
  Serial.println (Value, DEC);
  delay(100);
}

int red = 10;
int green = 11;

void setup() {
  pinMode (red, OUTPUT);
  pinMode (green, OUTPUT);
}

void loop() {
  analogWrite(red, 225);
  delay(1000);
  analogWrite(red, 0);
  delay (1000);
  analogWrite(green, 225);
  delay(1000);
  analogWrite(green, 0);
  delay(1000);
}

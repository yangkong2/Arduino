int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
 int sensorValue = analogRead(sensorPin);

  Serial.print("Soil.Moisture=");
  Serial.print(sensorValue);

  delay(1000);
}

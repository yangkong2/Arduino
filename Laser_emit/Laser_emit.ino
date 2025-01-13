int DigitalPin = 7;  // Digital input

void setup ()

{

  pinMode (DigitalPin, OUTPUT);

  Serial.begin (9600);

}

void loop ()

{

  digitalWrite (DigitalPin, HIGH);

  delay(1000);

  digitalWrite (DigitalPin, LOW);

  delay(1000);

}
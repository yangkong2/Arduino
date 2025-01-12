int RED = 9;
int GREEN = 10;
int BLUE = 11;

int i;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for (i = 255; i > 0; i--)
  {
    analogWrite (RED, i);
    analogWrite (GREEN, 255 - i);
    analogWrite (BLUE, 128 - i);
    Serial.println(i);
    delay(1);
  }
}

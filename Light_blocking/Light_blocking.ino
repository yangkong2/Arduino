
//*******************************************************************************

// Project : 37_LIGHT_BLOCKING in Sensor Kit

// Board : Arduino Uno 

// By : Kit Plus

//*******************************************************************************

int DigitalPin =7;  // Digital input

int Led = 13;     // select the pin for the LED

int gValue = 0;     // variable for Sensor Data

void setup()

{

  Serial.begin (9600);

  pinMode(Led, OUTPUT); // LED pin as output

  pinMode(DigitalPin, INPUT); //photo interrupter pin as input

}

void loop()

{

  gValue=digitalRead(DigitalPin); //read the value of the sensor 

  if(gValue == HIGH) // turn on LED when sensor is blocked 

  {

    digitalWrite(Led,HIGH);

  }

  else

  {

    digitalWrite(Led,LOW);

  }

  Serial.print ("Sensor Value : ");

  Serial.println (gValue, DEC);

  delay(500);

}
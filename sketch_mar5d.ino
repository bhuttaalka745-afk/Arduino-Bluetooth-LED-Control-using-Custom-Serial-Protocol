void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    char start = Serial.read();
   Serial.print(Serial.read());
    if (start == '*')
    {
      int pin = Serial.parseInt();
      int value = Serial.parseInt();
     // int dataIn = Serial.parseInt();

      pinMode(pin, OUTPUT);

      Serial.print("Received: ");
     // Serial.println(dataIn);

      Serial.print("Pin: ");
      Serial.println(pin);

      Serial.print("Value: ");
      Serial.println(value);

      if (value == 3)
      {
        digitalWrite(pin, HIGH);
        Serial.println("LED ON");
      }

      if (value == 4)
      {
        digitalWrite(pin, LOW);
        Serial.println("LED OFF");
      }
    }
  }
}
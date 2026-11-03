// 5-bit binary counter
// Elizabeth Posusta Nov 2026
//
const int LED_PIN0 = 2;
const int LED_PIN4 = 6;
int c = 0b00000;
int c_swap = 0b00000;

void setup()
{
  Serial.begin(5);
  for(int pin = LED_PIN0; pin <= LED_PIN4; pin++)
  {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  c_swap = c;
  delay(100);
  for(int pin = LED_PIN0; pin <= LED_PIN4; pin++)
  {
    if(c % 2 == 0)
    {
      digitalWrite(pin, LOW);
      Serial.print("0");
    } else {
      digitalWrite(pin, HIGH);
      Serial.print("1");
    }
    c = c >> 1;
  }
  Serial.print("\n");
  delay(100);
  c = c_swap;
  c++;

  if(c > 0b11111)
  {
   c = 0b00000;
   c_swap = 0b00000;
  }
}

#define LED_PIN D1            // LED at D1
int value = 0;                // variable to keep the actual value
void setup()
{
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200); 
}
void loop()
{
  for (value = 0; value <= 255; value += 5)   // fade in (min to max)
  {
    analogWrite(LED_PIN, value);              // sets the value (0 to 255)
    delay(30);                                // waits for 30 milliseconds

    Serial.print("Analog input0 = ");
    Serial.println(value);
  }
  for (value = 255; value >= 0; value -= 5)   // fade out (max to min)
  {
    analogWrite(LED_PIN, value);
    delay(30);

    Serial.print("Analog input0 = ");
    Serial.println(value);
    
  }
  delay(1000);
}

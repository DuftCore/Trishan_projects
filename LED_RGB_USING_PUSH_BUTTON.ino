//BLINKING A LED USING A PUSH BUTTON
// C++ code
void setup()
{
  pinMode(10, OUTPUT); //RED
  pinMode(11,OUTPUT); //BLUE
  pinMode(12,OUTPUT); //GREEN
  pinMode(4,INPUT);
}

void loop()
{
   if (digitalRead(4)==HIGH) {
  digitalWrite(10, HIGH); //RED
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(10, LOW);
  delay(500); // Wait for 500 millisecond(s)

    
  digitalWrite(11, HIGH); //BLUE
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(11, LOW);
  delay(500); // Wait for 500 millisecond(s)

    
  digitalWrite(12, HIGH); //GREEN
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  delay(500); // Wait for 500 millisecond(s)
   }
}
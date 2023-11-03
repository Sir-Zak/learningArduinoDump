//Sir-Zak
//11/2/2023


// Initial setup, naming the each pin
int red = 6;
int blue = 2;
int green = 4;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

// Declaring each pinmode
void setup() 
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

// Main loop, if nither button is pressed the Red LED will be lit
// while the Apin button is pressed only Blue will be lit
// while the Bpin button is pressed only Green will be lit
void loop() 
{
  if (digitalRead(buttonApin) == HIGH && digitalRead(buttonBpin) == HIGH)
  {
    digitalWrite(red , HIGH);
    analogWrite(blue , LOW);
    analogWrite(green , LOW);
  }
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(red , LOW);
    digitalWrite(blue , HIGH);
    digitalWrite(green , LOW);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(red , LOW);
    digitalWrite(blue , LOW);
    digitalWrite(green , HIGH);
  }
}

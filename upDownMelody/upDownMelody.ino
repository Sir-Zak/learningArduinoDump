

//Sir-Zak
//11/7/2023
      // Pitches library helps convert hz into easy to use code
#include "pitches.h"
 //Set pins
int up = 12;
int down =10;
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int thisNote = 0; //prime this note variable
 

 //declare pinMode and input type
void setup() {
 pinMode(up, INPUT_PULLUP);
 pinMode(down, INPUT_PULLUP);
}
 

 //If up button is low (Pressed), raises tone by one note in the melody
 // if down button is low (pressed), lowers tone by one note in the melody
void loop() 
{ 
 if (digitalRead(up) == LOW) 
 {
    thisNote += 1;
    delay(1000); // Delay stops it from jetting through tones at clock speed
 }
 else if (digitalRead(down) == LOW) {
    thisNote -= 1;
    delay(1000); 
  }
  
  // Ensure thisNote stays within the array bounds, thank you gpt for teaching me constrain!!
  thisNote = constrain(thisNote, 0, sizeof(melody) / sizeof(melody[0]) - 1);
  // play a thisNote tone on pin 8
  tone(8, melody[thisNote]);
}


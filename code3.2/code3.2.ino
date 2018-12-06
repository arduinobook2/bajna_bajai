/*Pentatonic Piano
  C D E G A
----------------------------*/

//define frequency of different note

#define NOTE_C  262 
#define NOTE_D  294 
#define NOTE_E  330 
#define NOTE_G  392 
#define NOTE_A  440 

//Speaker on Pin 9

const int SPEAKER=9;   

//Button Pin

const int BUTTON_C=7;  
const int BUTTON_D=6; 
const int BUTTON_E=5;  
const int BUTTON_G=4;  
const int BUTTON_A=3;  


void setup()
{
 //No setup needed because
 //Tone function sets outputs
}

void loop()
{
//play the Tone while button in pressed
  
 while (digitalRead(BUTTON_C))
  tone(SPEAKER, NOTE_C);
 while(digitalRead(BUTTON_D))
  tone(SPEAKER, NOTE_D);
 while(digitalRead(BUTTON_E))
  tone(SPEAKER, NOTE_E);
 while(digitalRead(BUTTON_G))
  tone(SPEAKER, NOTE_G);
 while(digitalRead(BUTTON_A))
  tone(SPEAKER, NOTE_A);
 
 //Stop playing if all buttons have been released
 noTone(SPEAKER);
}

//define frequency of different note

#define NOTE_E3  165
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_A4  440
#define NOTE_B4  494

//making pin 9 constant for SPEAKER.

const int SPEAKER=9;  

//notes Array

int notes[ ] = {
                 NOTE_A4, NOTE_E3, NOTE_A4, 0, 
                 NOTE_A4, NOTE_E3, NOTE_A4, 0,
                 NOTE_E4, NOTE_D4, NOTE_C4, NOTE_B4, 
                 NOTE_A4, NOTE_B4, NOTE_C4, NOTE_D4,
                 NOTE_E4, NOTE_E3, NOTE_A4, 0
               };

//The Duration of each note (in ms)
int times[] = {
               250, 250, 250, 250, 
               250, 250, 250, 250,
               125, 125, 125, 125, 
               125, 125, 125, 125,
               250, 250, 250, 250 
              };


void setup()
{
 
}

void loop()
{
 //Play each note for the right duration
 
 for (int i = 0; i < 20; i++)
 {
  tone(SPEAKER, notes[i], times[i]);
  delay(times[i]); 
 }
 delay(1000);
}

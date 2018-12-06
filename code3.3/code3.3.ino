/* Romjaner Oi Rojar Sheshe Elo Khushur Eid.
It is a famous Eid-song by poet Kazi Nazrul Islam. */

/*defining notes of different scales.
--------------------------------------------*/
// low scale

#define d0 467
#define D0 494
#define n0 524
#define N0 555

// middle scale

#define S 588
#define r 623
#define R 660
#define g 699
#define G 740
#define M 784
#define m 831
#define P 880
#define d 933
#define D 988
#define n 1047
#define N 1109

//high scale 

#define S1 1175
#define r1 1246
#define R1 1320
#define g1 1398
#define G1 1480
#define M1 1568
#define d1 1976

// for pausing between two notes, z for zero
#define z 0    

// for beats or tempo or speed
// we can mutiply b by any number to get more duration in any single note
//Or devide for vice versa
#define b 280  
               
// the pin where the speaker is connected to
int speakerPin = 9; 

// number of notes in each verse of the song 22+22+25+25, total 94
int numTones =  94;  


int tones[] = { n,z,n,z,n,S1,r1,S1,        r1,n,P,n,P,n, z,n,       S1,n,S1,g1,r1,z,
                S1,z,n,z,n,S1,r1,S1,       r1,n,P,n,P,n, z,n,       S1,n,S1,g1,r1,z,
                n,z,n,z,n,S1,g1,z,         g1,z,g1,M1,g1,M1,z,g1,   M1,g1,M1,d1,M1,r1,S1,n,z,
                n,z,n,z,n,S1,g1,z,         g1,z,g1,M1,g1,M1,z,g1,   M1,g1,M1,d1,M1,r1,S1,n,z 
              };

int beats[] ={ b,b/10,b,b/8,b,4*b,b,b,         b,3*b,b,b,b,b,b/10,2*b,       2*b,b,2*b,2*b,6*b,2*b,
               b,b/10,b,b/8,b,4*b,b,b,         b,3*b,b,b,b,b,b/10,2*b,       2*b,b,2*b,2*b,6*b,2*b,
               b,b/10,b,b/10,2*b,2*b,2*b,b/15, b,b/10,b,3*b,b,b,b/10,2*b,    b,b,b,3*b,b,3*b,b,b,b,
               b,b/10,b,b/10,2*b,2*b,2*b,b/15, b,b/10,b,3*b,b,b,b/10,2*b,    b,b,b,3*b,b,3*b,b,b,2*b,
             };



void setup()
{
// the setup block is left empty.
}

void loop()
{
  for (int i = 0; i < numTones; i++)
  {

    tone(speakerPin, tones[i]);

    delay(beats[i]);
    }
  
  noTone(speakerPin);
  
}

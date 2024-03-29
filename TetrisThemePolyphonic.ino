//THIS DECLARES NOTE FREQUENCIES FOR THE SPEAKERS, WHICH ALLOW YOU TO PROGRAM A SONG IN ANY OCTAVE DESIRED
//////////NOTE LIBRARY

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_DS8 4978
#define FIRST_TONE_PIN 2
#define NUM_OF_VOICES 2
long TMO;


  
int melody1[] = {
   NOTE_A6,NOTE_E6,NOTE_F6,NOTE_G6,NOTE_A6,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_D6,NOTE_F6,NOTE_A6,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_G6,NOTE_A6,NOTE_F6,NOTE_D6,NOTE_D6,0,
   NOTE_G6,NOTE_AS6,NOTE_D7,NOTE_C7,NOTE_AS6,NOTE_A6,NOTE_F6,NOTE_A6,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_E6,NOTE_F6,NOTE_G6,NOTE_A6,NOTE_F6,NOTE_D6,NOTE_D6,0,
   NOTE_A6,NOTE_E6,NOTE_F6,NOTE_G6,NOTE_A6,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_D6,NOTE_F6,NOTE_A6,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_G6,NOTE_A6,NOTE_F6,NOTE_D6,NOTE_D6,0,
   NOTE_G6,NOTE_AS6,NOTE_D7,NOTE_C7,NOTE_AS6,NOTE_A6,NOTE_F6,NOTE_A6,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_E6,NOTE_F6,NOTE_G6,NOTE_A6,NOTE_F6,NOTE_D6,NOTE_D6,0,
   NOTE_A6,NOTE_F6,NOTE_G6,NOTE_E6,NOTE_F6,NOTE_D6,NOTE_CS6,NOTE_E6,0,
   NOTE_A6,NOTE_F6,NOTE_G6,NOTE_E6,NOTE_F6,NOTE_A6,NOTE_D7,NOTE_CS7,0,
  
 };
int melDurations1[] = {
 400,200,200,200,100,100,200,200,400,200,200,400,200,200,600,200,400,400,400,400,800,200,
 400,200,400,200,200,600,200,400,200,200,400,200,200,400,400,400,400,400,400,
 400,200,200,200,100,100,200,200,400,200,200,400,200,200,600,200,400,400,400,400,800,200,
 400,200,400,200,200,600,200,400,200,200,400,200,200,400,400,400,400,400,400,
 800,800,800,800,800,800,800,400,400,
 800,800,800,800,400,400,800,800,800,
 
  };
int harmony1[] = {
   NOTE_A4,NOTE_A5,NOTE_A4,NOTE_A5,NOTE_A4,NOTE_A5,NOTE_A4,NOTE_A5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_CS4,NOTE_CS5,NOTE_CS4,NOTE_CS5,NOTE_A4,NOTE_A5,NOTE_A4,NOTE_A5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_E5,NOTE_F5,
   NOTE_G5,NOTE_G4,0,NOTE_G4,0,NOTE_G4,NOTE_D5,NOTE_AS6,NOTE_F4,NOTE_F5,0,NOTE_F5,NOTE_F4,NOTE_C5,0,NOTE_C5,NOTE_E5,NOTE_E6,0,NOTE_E6,0,NOTE_A5,0,NOTE_CS6,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,0,
   NOTE_A4,NOTE_A5,NOTE_A4,NOTE_A5,NOTE_A4,NOTE_A5,NOTE_A4,NOTE_A5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_CS4,NOTE_CS5,NOTE_CS4,NOTE_CS5,NOTE_A4,NOTE_A5,NOTE_A4,NOTE_A5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_D4,NOTE_D5,NOTE_E5,NOTE_F5,
    NOTE_G5,NOTE_G4,0,NOTE_G4,0,NOTE_G4,NOTE_D5,NOTE_AS6,NOTE_F4,NOTE_F5,0,NOTE_F5,NOTE_F4,NOTE_C5,0,NOTE_C5,NOTE_E5,NOTE_E6,0,NOTE_E6,0,NOTE_A5,0,NOTE_CS6,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,0,
   NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_D5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,NOTE_CS5,NOTE_A5,
   
   

  };
int harmDurations1[] = {
 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,
 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,400,400,
 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,
 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,400,400,
  200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,
 200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,200,

   };


void setup() {
  Serial.begin(9600);
  for (unsigned char i = 0; i < NUM_OF_VOICES; i++) {
    pinMode(i+FIRST_TONE_PIN,OUTPUT);
      }
  

}

void loop() {
  playTune(melody1, sizeof(melody1)/sizeof(int), melDurations1, harmony1, sizeof(harmony1)/sizeof(int), harmDurations1);
 }
  
//DO NOT DELETE // no need to modify anything below for basic use
void playTune(int melody[], int melLength, int melDurations[], int harmony[], int harmLength, int harmDurations[])
  {
  unsigned int Counts[] = { 0, 0};
  unsigned int Periods[] = { 0, 0};
  unsigned char States[] = { 0, 0};
  
  unsigned long stopTimeNote1 = 0;
  unsigned long stopTimeNote2 = 0;
  unsigned char TimedPin = 0;
  unsigned int CurrentCount = 0;
  unsigned char i;
  unsigned char indexMel = 0, indexHarm = 0;
  
  while (1) {
    CurrentCount = Counts[0];
    TimedPin = 0;
    for (i=1;i<NUM_OF_VOICES;i++) {
      if (Counts[i] < CurrentCount) {
        TimedPin = i;
        CurrentCount = Counts[i];
      } // for
    }
    if (CurrentCount > 3)
      delayMicroseconds(CurrentCount);
    if (Periods[TimedPin] < 65535)
      States[TimedPin] = !States[TimedPin];
    digitalWrite(FIRST_TONE_PIN+TimedPin,States[TimedPin]);

    if (millis() >= stopTimeNote1) {
      if (indexMel >= melLength)
        break;
      stopTimeNote1 = millis() + melDurations[indexMel];
      Periods[0] = 1000000 / melody[indexMel++];
    }
    if (millis() >= stopTimeNote2) {
      if (indexHarm >= harmLength)
        break;
      stopTimeNote2 = millis() + harmDurations[indexHarm];
      Periods[1] = 1000000 / harmony[indexHarm++];
    }
    
    for (i = 0; i < NUM_OF_VOICES; i++) {
      Counts[i] = Counts[i] - CurrentCount;
    }
    Counts[TimedPin] = Periods[TimedPin];
  }
}





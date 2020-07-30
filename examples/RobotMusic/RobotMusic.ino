
#include <CuteBuzzerSounds.h>

/*
 * Author: James Stenquist
 */

#define BUZZER_PIN 7

void setup() 
{
  cute.init(BUZZER_PIN);
}

void loop() 
{
  // cute.playTone(NOTE_C5, 200, 5);
  // cute.playTone(NOTE_C5, 200, 5);
  // cute.playTone(NOTE_D5, 200, 5);
  // cute.playTone(NOTE_E5, 200, 5);
  // cute.playTone(NOTE_C5, 200, 5);
  // cute.playTone(NOTE_E5, 200, 5);
  // cute.playTone(NOTE_D5, 400, 5);

  // cute.playTone(NOTE_C5, 200, 5);
  // cute.playTone(NOTE_C5, 200, 5);
  // cute.playTone(NOTE_D5, 200, 5);
  // cute.playTone(NOTE_E5, 200, 5);
  // cute.playTone(NOTE_C5, 400, 5);
  // cute.playTone(NOTE_B4, 400, 5);

  cute.bendTones(NOTE_C5, NOTE_F5, 1.02, 20, 15);

  int tempo = 50;
  int silent =450;

  cute.playTone(NOTE_B5, tempo, silent);
  cute.playTone(NOTE_A5, tempo, silent);
  cute.playTone(NOTE_G5, tempo, silent);
  cute.playTone(NOTE_A5, tempo, silent);
  cute.playTone(NOTE_B5, tempo, silent);
  cute.playTone(NOTE_B5, tempo, silent);
  cute.playTone(NOTE_B5, tempo*2, silent);

  cute.playTone(NOTE_A5, tempo, silent);
  cute.playTone(NOTE_A5, tempo, silent);
  cute.playTone(NOTE_A5, tempo*2, silent);
  cute.playTone(NOTE_B5, tempo, silent);
  cute.playTone(NOTE_D6, tempo, silent);
  cute.playTone(NOTE_D6, tempo*2, silent);


  delay(10000);
}

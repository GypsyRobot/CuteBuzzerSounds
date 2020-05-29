
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
  cute.playTone(NOTE_C5, 500, 50);
  cute.playTone(NOTE_C5, 500, 50);
  cute.playTone(NOTE_D5, 500, 50);
  cute.playTone(NOTE_E5, 500, 50);
  cute.playTone(NOTE_C5, 500, 50);
  cute.playTone(NOTE_E5, 500, 50);
  cute.playTone(NOTE_D5, 1000, 50);

  cute.playTone(NOTE_C5, 500, 50);
  cute.playTone(NOTE_C5, 500, 50);
  cute.playTone(NOTE_D5, 500, 50);
  cute.playTone(NOTE_E5, 500, 50);
  cute.playTone(NOTE_C5, 1000, 50);
  cute.playTone(NOTE_B4, 1000, 50);

  cute.bendTones(NOTE_C5, NOTE_F5, 1.02, 500, 50);

  delay(2000);
}

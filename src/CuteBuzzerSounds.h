#ifndef CuteBuzzerSounds_h
#define CuteBuzzerSounds_h
#ifdef __AVR__
  #include <avr/power.h>
#endif
#include "Sounds.h"

#define debug true


class CuteBuzzerSoundsClass
{
public:

void init(int buzzerPin);
void initBuzzer(int buzzerPin);

// Sounds
void playTone (float noteFrequency, long noteDuration, int silentDuration, bool isMicro=false);
void toneWithVolume(float noteFrequency, long noteDuration, int volume);
void bendTones (float initFrequency, float finalFrequency, float prop, long noteDuration, int silentDuration);
void playSound(int soundName);


private:
int buzzerPin;
};

extern CuteBuzzerSoundsClass cute;

#endif

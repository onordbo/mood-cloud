
/* TrueRandom Library repository:
 * https://code.google.com/p/tinkerit/wiki/TrueRandom
 */
 
#include <TrueRandom.h>

int ledRed = 6;
int ledGreen = 8;
int ledYellow = 9;
int ledBlack = 13;

void setup() {
  pinMode (ledRed, OUTPUT);
  pinMode (ledGreen, OUTPUT);
  pinMode (ledYellow, OUTPUT);
  pinMode (ledBlack, OUTPUT);
}

void loop() {
  digitalWrite(ledRed, TrueRandom.random(2));
  digitalWrite(ledGreen, TrueRandom.random(2));
  digitalWrite(ledYellow, TrueRandom.random(2));
  digitalWrite(ledBlack, TrueRandom.random(2));
  int ledDelay = TrueRandom.random(50, 100);
  delay(ledDelay);  
}

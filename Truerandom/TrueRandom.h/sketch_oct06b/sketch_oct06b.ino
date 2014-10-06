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
  digitalWrite(ledRed, random(2));
  digitalWrite(ledGreen, random(2));
  digitalWrite(ledYellow, random(2));
  digitalWrite(ledBlack, random(2));
  int leddelay = random(50, 100);
  delay(leddelay);
  
  
 }


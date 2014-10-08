//Delay controllers
int ledOne_delay = 50;

//Initial setup
void setup() {

  // Set LED pins to output
  pinMode(8, OUTPUT);

}

void loop() {

  //Led 1
  digitalWrite(8, HIGH);
  delay(ledOne_delay);
  digitalWrite(8, LOW);
  delay(ledOne_delay);

};

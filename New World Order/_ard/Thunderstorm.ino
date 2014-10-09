/*
*    Thundercloud, built by Group 1 @ Hyper Island, Karlskrona during the Exploring Tech module
*
*    Group members:
*    Katie Lindstrom   //  @katiee
*    Anas Kadhim       //  @anas
*    Mikaél Finer      //  @mikaelfiner
*    Øyvind Nordbø     //  @onordbo
*
*    How to flicker a light
*    ======================
*    Light states:
*
*    HIGH = Light on
*    LOW  = Light off
*
*
*    //Example light flicker
*
*    //Set delay controller
*    int ledOne_delay = 50;
*
*    digitalWrite(8, HIGH);    // Turn the LED on
*    delay(ledOne_delay);      // Wait for a set period, assigned by the delay controller variable
*    digitalWrite(8, LOW);     // Turn the LED off
*    delay(ledOne_delay);      // Wait for a given period, assigned by the delay controller variable
*
*/


//Delay controllers
int ledOne_delay = 50;
int ledTwo_delay = 100;
int ledThree_delay = 400;
int ledFour_delay = 50;
int ledFive_delay = 80;
int ledSix_delay = 180;

//Sensor pin
int sensorPin = 12;

//Initial setup
void setup() {

  // Set LED pins to output
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  //Set PIR Sensor pin to input
  pinMode(sensorPin, INPUT);

}

//Infinitely running code
void loop() {

  //Led 1
  digitalWrite(7, HIGH);
  delay(ledOne_delay);
  digitalWrite(7, LOW);
  delay(ledOne_delay);

  //Led 2
  digitalWrite(8, HIGH);
  delay(ledTwo_delay);
  digitalWrite(8, LOW);
  delay(ledTwo_delay);

  //Led 3
  digitalWrite(9, HIGH);
  delay(ledThree_delay);
  digitalWrite(9, LOW);
  delay(ledThree_delay);

  //Led 4
  digitalWrite(10, HIGH);
  delay(ledFour_delay);
  digitalWrite(10, LOW);
  delay(ledFour_delay);

  //Led 5
  digitalWrite(11, HIGH);
  delay(ledFive_delay);
  digitalWrite(11, LOW);
  delay(ledFive_delay);

  //Led 6
  digitalWrite(12, HIGH);
  delay(ledSix_delay);
  digitalWrite(12, LOW);
  delay(ledSix_delay);

}

//Led variables
int ledOne   = 7;
int ledTwo   = 8;
int ledThree = 9;
int ledFour  = 10;
int ledFive  = 11;
int ledSix   = 12;

//Delay controllers
int ledOne_delay = 50;
int ledTwo_delay = 100;
int ledThree_delay = 400;
int ledFour_delay = 50;
int ledFive_delay = 80;
int ledSix_delay = 180;

//Sensor pin
int sensorPin = 13;

void setup() {

  // Set LED pins to output
  pinMode(ledOne,   OUTPUT);
  pinMode(ledTwo,   OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour,  OUTPUT);
  pinMode(ledFive,  OUTPUT);
  pinMode(ledSix,   OUTPUT);

  //Set PIR Sensor pin to input
  pinMode(sensorPin, INPUT);

  //Initialize serial connection
  Serial.begin(9600);

}

void loop(){

  int sensor = digitalRead(sensorPin); // read input value
  if (sensor == HIGH) // Check for motion (HIGH)
  {
    Serial.println('Motion');
    //Led 1
    digitalWrite(ledOne, HIGH);
    delay(ledOne_delay);
    digitalWrite(ledOne, LOW);
    delay(ledOne_delay);

    //Led 2
    digitalWrite(ledTwo, HIGH);
    delay(ledTwo_delay);
    digitalWrite(ledTwo, LOW);
    delay(ledTwo_delay);

    //Led 3
    digitalWrite(ledThree, HIGH);
    delay(ledThree_delay);
    digitalWrite(ledThree, LOW);
    delay(ledThree_delay);

    //Led 4
    digitalWrite(ledFour, HIGH);
    delay(ledFour_delay);
    digitalWrite(ledFour, LOW);
    delay(ledFour_delay);

    //Led 5
    digitalWrite(ledFive, HIGH);
    delay(ledFive_delay);
    digitalWrite(ledFive, LOW);
    delay(ledFive_delay);

    //Led 6
    digitalWrite(ledSix, HIGH);
    delay(ledSix_delay);
    digitalWrite(ledSix, LOW);
    delay(ledSix_delay);
  } else {
    //Do nothing
  }
}

//Pin declaration for LEDs
int ledOne   = 5;
int ledTwo   = 6;
int ledThree = 7;
int ledFour  = 8;
int ledFive  = 9;
int ledSix   = 10;
int ledSeven = 11;
int ledEight = 12;

//Pin declaration for the PIR Sensor
int sensorPin = 13;

//Delay controllers
int ledOne_delay = 50;
int ledTwo_delay = 100;
int ledThree_delay = 400;
int ledFour_delay = 50;
int ledFive_delay = 80;
int ledSix_delay = 180;
int ledSeven_delay = 180;
int ledEight_delay = 180;

//Initialization
void setup() {

  // Set LED pins to output
  pinMode(ledOne,   OUTPUT);
  pinMode(ledTwo,   OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour,  OUTPUT);
  pinMode(ledFive,  OUTPUT);
  pinMode(ledSix,   OUTPUT);
  pinMode(ledSeven, OUTPUT);
  pinMode(ledEight, OUTPUT);

  //Set PIR Sensor pin to input
  pinMode(sensorPin, INPUT);

  //Initialize serial connection
  Serial.begin(9600);

}

//Concurrent code
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

    //Led 7
    digitalWrite(ledSeven, HIGH);
    delay(ledSeven_delay);
    digitalWrite(ledSeven, LOW);
    delay(ledSeven_delay);

    //Led 8
    digitalWrite(ledEight, HIGH);
    delay(ledSeven_delay);
    digitalWrite(ledEight, LOW);
    delay(ledSeven_delay);

  } else {
    Serial.println('BECAUSE, REASONS');
  }
}

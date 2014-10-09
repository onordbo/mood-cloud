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
  } else {

    digitalWrite(ledOne,   LOW);
    digitalWrite(ledTwo,   LOW);
    digitalWrite(ledThree, LOW);
    digitalWrite(ledFour,  LOW);
    digitalWrite(ledFive,  LOW);
    digitalWrite(ledSix,   LOW);

    if (pirState == HIGH){
      // we have just turned of
      Serial.println("Inactive");
      // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
}

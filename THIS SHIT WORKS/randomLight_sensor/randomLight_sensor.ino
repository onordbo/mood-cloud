//LED variables, designating pin lights
int ledRed = 6;
int ledGreen = 8;
int ledYellow = 9;
int ledBlack = 13;

//Sensor variables
int ledPin = 13;                // choose the pin for the light
int inputPin = 2;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int signal = 0;                 // variable for reading the pin status

//Designate LED states
void setup() {
  pinMode (ledRed, OUTPUT);
  pinMode (ledGreen, OUTPUT);
  pinMode (ledYellow, OUTPUT);
  pinMode (ledBlack, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  signal = digitalRead(inputPin);    // read input value
  if (signal == HIGH) {              // Check if the input state is HIGH
    if (pirState == LOW) {           // We have just turned it on
      Serial.println("Motion");
      pirState = HIGH;
      digitalWrite(ledRed, random(2));
      digitalWrite(ledGreen, random(2));
      digitalWrite(ledYellow, random(2));
      digitalWrite(ledBlack, random(2));
      delay(100);
    } else {
        Serial.println("No motion");
        pirState = LOW;
      }
    }
  }
}

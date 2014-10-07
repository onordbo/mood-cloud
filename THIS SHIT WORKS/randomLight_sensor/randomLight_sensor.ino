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
  signal = digitalRead(inputPin);     // read input value
  if (signal == HIGH) {               // Check if the input state is HIGH
    if (pirState == HIGH) {           // We have just turned it on
      Serial.println("Motion");
      pirState = LOW;
      digitalWrite(ledRed, random(1));
      digitalWrite(ledGreen, random(1));
      digitalWrite(ledYellow, random(1));
      digitalWrite(ledBlack, random(1));
      delay(100);
    } else {
      Serial.println("No motion");
      digitalWrite(ledRed, 0);
      digitalWrite(ledGreen, 0);
      digitalWrite(ledYellow, 0);
      digitalWrite(ledBlack, 0);
      pirState = HIGH;
    }
  }
}

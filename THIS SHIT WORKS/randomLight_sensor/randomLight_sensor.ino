//LED variables, designating pin lights
int ledRed = 6;
int ledGreen = 8;
int ledYellow = 9;
int ledBlack = 13;
int ledPin = 13;                // choose the pin for the light

//Sensor variables
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
<<<<<<< HEAD
 signal = digitalRead(inputPin);       // read input value
  if (signal == HIGH) {                // Check if the input state is HIGH
   digitalWrite(ledPin, HIGH);         // Turn ON the light
    if (pirState == LOW) {             // we have just turned on
     Serial.println("Motion");         // We only want to print on the output change, not state
      pirState = HIGH;                 //If you change this to LOW, one LED will light forever
       digitalWrite(ledRed, random(2));
       digitalWrite(ledGreen, random(2));
       digitalWrite(ledYellow, random(2));
       digitalWrite(ledBlack, random(2));
       delay(100);                     //Rate of blink

       } else {
      
       Serial.println("No motion"); // We only want to print on the output change, not state
       pirState = LOW;
        
=======
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
>>>>>>> fc703c4274da428b40b4265fbfe4a2b8e68c83e1
    }
  }
}


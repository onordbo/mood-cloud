int ledPin = 13;             // choose the pin for the light
int inputPin = 2;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int signal = 0;                 // variable for reading the pin status


void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
  Serial.begin(9600);
}


void loop(){
  signal = digitalRead(inputPin);  // read input value
  if (signal == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn light ON
    if (pirState == LOW) {     // we have just turned on
      Serial.println("Active");
      // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {

    digitalWrite(ledPin, LOW); // turn light OFF

    if (pirState == HIGH){
      // we have just turned of
      Serial.println("Inactive");
      // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
}

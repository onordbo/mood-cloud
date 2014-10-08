//LED variables, designating pin lights
int ledRed = 6;
int ledGreen = 8;
int ledYellow = 9;
int ledBlack = 13;

int inputPin = 2;               // choose the input pin (for PIR sensor)

//Designate LED states
void setup() {
  pinMode (ledRed, OUTPUT);
  pinMode (ledGreen, OUTPUT);
  pinMode (ledYellow, OUTPUT);
  pinMode (ledBlack, OUTPUT);
  pinMode (inputPin, INPUT);  //If we dont define pin's mode this pin electrically will be different see digitalPins reference

  digitalWrite(ledRed, LOW);  // Turn off leds first start
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledBlack, LOW);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(inputPin) == HIGH) {  // You can combine digitalRead with if statement
      Serial.println("Motion");
      digitalWrite(ledRed, random(1));
      digitalWrite(ledGreen, random(1));
      digitalWrite(ledYellow, random(1));
      digitalWrite(ledBlack, random(1));
      delay(100);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGreen, LOW);
      digitalWrite(ledYellow, LOW);
      digitalWrite(ledBlack, LOW);
      }
}

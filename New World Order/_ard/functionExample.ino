//Code that runs once
void setup(){
  Serial.begin(9600);
}

//Constant code
void loop() {
  int i = 2;
  int j = 3;
  int k;

  k = myMultiplyFunction(i, j); // k now contains 6
  Serial.println(k);
  delay(500);
}

//Function
int myMultiplyFunction(int x, int y){
  int result;
  result = x * y;
  return result;
}

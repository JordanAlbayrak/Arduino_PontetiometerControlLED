int sensorPin = A0;
int sensorValue = 0;
const int LED_PIN[3] = {5, 6, 7}; // Arduino pin connected to LED's pin

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT); //set sensor to input mode
  pinMode(LED_PIN[0], OUTPUT);  // set arduino pin to output mode
  pinMode(LED_PIN[1], OUTPUT);  // set arduino pin to output mode
  pinMode(LED_PIN[2], OUTPUT);  // set arduino pin to output mode


}
//Added this to test commiting changes to GitHub

void loop() {
  sensorValue = analogRead( sensorPin);
  Serial.println(sensorValue);

  if(sensorValue < 350){
  digitalWrite(LED_PIN[0], HIGH); //Turn on light on first index
  digitalWrite(LED_PIN[1], LOW); //Turn off light on first index
  digitalWrite(LED_PIN[2], LOW); //Turn off light on first index
  }
  
  else if(sensorValue < 700 && sensorValue > 350)
  {
  digitalWrite(LED_PIN[1], HIGH); //Turn on light on first index
  digitalWrite(LED_PIN[0], LOW); //Turn off light on first index
  digitalWrite(LED_PIN[2], LOW); //Turn off light on first index
  }
  
  else if(sensorValue > 700)
  {
  digitalWrite(LED_PIN[2], HIGH); //Turn on light on first index
  digitalWrite(LED_PIN[0], LOW); //Turn off light on first index
  digitalWrite(LED_PIN[1], LOW); //Turn off light on first index
  }
  else
  Serial.print("Error");
  delay(500);
 
}

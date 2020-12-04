
int MOT = 9;           // motor output pin
int motor_speed;    // motor speed value
int delay_time ;
int sensorPin = A0;    // select the input pin for the potentiometer

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(MOT, OUTPUT);
}

void loop() {

// read the value from the sensor:
 delay_time = analogRead(sensorPin);

analogWrite(MOT, motor_speed);
  
  motor_speed = 255-delay_time;
  Serial.print("Motor Speed is:");
  Serial.println(motor_speed);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delay_time);                       // wait for time set by potentiometer
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(delay_time);                       // wait for time set by potentiometer
}

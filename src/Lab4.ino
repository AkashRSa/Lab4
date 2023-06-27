SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup()
{

  // Put initialization like pinMode and begin functions here.
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, INPUT);
  Serial.begin(9600);
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{ // D5 is blue, D6 is green, D7 is red
  int x = digitalRead(D8);
  if (x == 0) {
    analogWrite(D7, 255);
    analogWrite(D6, 255);
    analogWrite(D5, 0);
  }
  else {
    analogWrite(D7, 255);
    analogWrite(D6, 255);
    analogWrite(D5, 255);
  }
}
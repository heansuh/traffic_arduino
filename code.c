int red = 13;
int yellow = 12;
int green = 8;
int buttn1 = 2;
//int buttn2 = 7;


void setup() {

  // initialize digital pin LED_BUILTIN as an output.
  
  //pinMode(buttn2, INPUT);
  pinMode(buttn1, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  
}

// the loop function runs over and over again forever

void loop() {

  
  if (digitalRead(buttn1) == HIGH) {
  
  digitalWrite(yellow, HIGH);                  // turn the LED on (HIGH is the voltage level)
  delay(800);                                // wait for a second
  digitalWrite(yellow, LOW);                 // turn the LED off by making the voltage LOW
  delay(50);                                // wait for a second


  digitalWrite(green, HIGH);                  // turn the LED on (HIGH is the voltage level)
  delay(9000);                                // wait for a second
  digitalWrite(green, LOW);                  // turn the LED off by making the voltage LOW
  delay(200);                               // wait for a second
  
  }
  

  
  else 
  digitalWrite(red, HIGH);                    // turn the LED on (HIGH is the voltage level)
  delay(6000);                                // wait for a second
  digitalWrite(red, LOW);                     // turn the LED off by making the voltage LOW
  delay(200);                                 // wait for a second


  digitalWrite(yellow, HIGH);                  // turn the LED on (HIGH is the voltage level)
  delay(2000);                                // wait for a second
  digitalWrite(yellow, LOW);                 // turn the LED off by making the voltage LOW
  delay(100);                                // wait for a second


  digitalWrite(green, HIGH);                  // turn the LED on (HIGH is the voltage level)
  delay(6000);                                // wait for a second
  digitalWrite(green, LOW);                  // turn the LED off by making the voltage LOW
  delay(200);                               // wait for a second



  digitalWrite(yellow, HIGH);               // turn the LED on (HIGH is the voltage level)
  delay(2000);                              // wait for a second
  digitalWrite(yellow, LOW);                // turn the LED off by making the voltage LOW
  delay(100);                               // wait for a second
 
}

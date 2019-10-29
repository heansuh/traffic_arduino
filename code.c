const int red = 3;
const int yellow = 4;
const int green = 5;
const int buttn1 = 7;

//int buttn2 = 7;

int currentState = red;

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
  
  switch(currentState)
  {
    
    case red:
    
    // not sure if below one is needed, same result at the end
    
    /*
    
    if (digitalRead(buttn1) == HIGH)
    {
      currentState = yellow;
    }
    
    */
    
    digitalWrite(red, HIGH);
    delay(3000);
    digitalWrite(red, LOW);
    delay(200);
    currentState = yellow;
    
    case yellow:
    
    if (digitalRead(buttn1) == HIGH)
    {
      digitalWrite(yellow, HIGH);
      delay(5000);
      digitalWrite(yellow, LOW);
      delay(200);
      currentState = green;
    }
    
    else
    {
      digitalWrite(yellow, HIGH);
      delay(3000);
      digitalWrite(yellow, LOW);
      delay(100);
      currentState = green;
    }
    
    case green:
    
    if (digitalRead(buttn1) == HIGH)
    {
      digitalWrite(green, HIGH);
      delay(9000);
      digitalWrite(green, LOW);
      delay(200);
      currentState = yellow;
    }
    
    else
    {
      digitalWrite(green, HIGH);
      delay(3000);
      digitalWrite(green, LOW);
      delay(200);
      currentState = red;
    }
    
  }
}
    
  /*
  
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
  
} */

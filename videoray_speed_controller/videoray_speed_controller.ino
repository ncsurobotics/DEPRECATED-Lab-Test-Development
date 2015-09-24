int led = 5;

uint16_t loop_time = 32768; // about 51Hz
uint16_t on_time = 1050;
uint16_t off_time = loop_time-on_time;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as a low output.
  pinMode(led, OUTPUT);    
  digitalWrite(led, LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  int i = 0;
  while(i<100) {
    // start of loop. set output high
    digitalWrite(led, HIGH);
    delayMicroseconds(on_time);
    
    // Set low for a certain amount of time
    digitalWrite(led, LOW);
    delayMicroseconds(off_time);
    i++;
  }
  
  on_time = 1250;
  off_time = loop_time-on_time;
  while(1) {
   // start of loop. set output high
    digitalWrite(led, HIGH);
    delayMicroseconds(on_time);
    
    // Set low for a certain amount of time
    digitalWrite(led, LOW);
    delayMicroseconds(off_time);
  }
 
}


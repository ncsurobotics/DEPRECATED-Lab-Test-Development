int led = 5;
int potPin = 2;
float val = 0; 

uint16_t loop_time = 32768; // about 51Hz
uint16_t on_time = 1050;
uint16_t off_time = loop_time-on_time;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
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
  

  
  while(1) {
    
    // Read user input
    val = analogRead(potPin);
    
    // Adjust pulse time accordingly
    on_time = map(val, 0, 1023, 1050,1900);
    off_time = loop_time - on_time;
    
   // start of loop. set output high
    digitalWrite(led, HIGH);
    delayMicroseconds(on_time);
    
    // Set low for a certain amount of time
    digitalWrite(led, LOW);
    delayMicroseconds(off_time);
  }
 
}


#define R1Pin 3
#define G1Pin 5
#define B1Pin 6
#define R2Pin 9
#define G2Pin 10
#define B2Pin 11

//RGB1 Pins are for the top part of Logo
//RGB2 Pins are for the two legs of the logo

// TODO : Add IR IO Pins and Setup calls
// TODO : Add In RGB Modes for Sign
// TODO : Add switch case statement to switch between color modes

// Set up for IOs
void setup() {

  pinMode(R1Pin, OUTPUT);
  pinMode(G1Pin, OUTPUT);
  pinMode(B1Pin, OUTPUT);
  pinMode(R2Pin, OUTPUT);
  pinMode(G2Pin, OUTPUT);
  pinMode(B2Pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}

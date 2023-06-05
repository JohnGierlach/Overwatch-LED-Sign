#define R1Pin 3
#define G1Pin 4
#define B1Pin 5
#define R2Pin 6
#define G2Pin 7
#define B2Pin 8

const char modeSelect = 0;
const char classic = '0';
const char blue = '1';
const char green = '2';
const char red = '3';
const char yellow = '4';
const char rgb = '5'; 
//RGB1 Pins are for the top part of Logo
//RGB2 Pins are for the two legs of the logo

// TODO : Add Bluetooth IO Pins and Setup calls
// TODO : Add In RGB Modes for Sign

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
  switch(modeSelect){

    // Classic OW Logo  
    case classic:
      getAnalogColor(255, 140, 0, 
                     255, 255, 255);
    break;

    // Blue OW Logo
    case blue:
      getAnalogColor(0, 0, 255, 
                     0, 255, 255);
    break;
    
    // Green OW Logo
    case green:
      getAnalogColor(0, 204, 0, 
                     0, 255, 0);
    break;

    // Red OW Logo
    case red:
      getAnalogColor(204, 0, 0, 
                     255, 0, 0);
    break;

    // Yellow OW Logo
    case yellow:
      getAnalogColor(204, 204, 0, 
                     255, 255, 0);
    break;

    // RGB OW Logo
    case rgb:
      for(int i=0;i<=255;i+=3)
        {
          analogWrite(R1Pin,255-i);
          analogWrite(R2Pin,255-i);
          analogWrite(G1Pin, i);
          analogWrite(G2Pin, i);
          delay(100);
        }
      for(int i=0;i<=255;i+=3)
        {
          analogWrite(G1Pin,255-i);
          analogWrite(G2Pin,255-i);
          analogWrite(B1Pin, i);
          analogWrite(B2Pin, i);
          delay(100);
        }
      for(int i=0;i<=255;i+=3)
        {
          analogWrite(B1Pin,255-i);
          analogWrite(B2Pin,255-i);
          analogWrite(R1Pin, i);
          analogWrite(R2Pin, i);
          delay(100);
        }
    break;
    // Classic OW Logo
    default:
      getAnalogColor(255, 140, 0, 
                     255, 255, 255);
    break;
  }
}

void getAnalogColor(int r1, int g1, int b1, int r2, int g2, int b2){
      analogWrite(R1Pin, r1);
      analogWrite(G1Pin, g1);
      analogWrite(B1Pin, b1);

      analogWrite(R2Pin, r2);
      analogWrite(G2Pin, g2);
      analogWrite(B2Pin, b2);
}

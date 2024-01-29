#include <Arduino.h>

#define R1Pin 4
#define G1Pin 16
#define B1Pin 17
#define R2Pin 5
#define G2Pin 18
#define B2Pin 19

int modeSelect = 0;
const int classic = 0;
const int blue = 1;
const int green = 2;
const int red = 3;
const int yellow = 4;
const int rgb = 5; 
//RGB1 Pins are for the top part of Logo
//RGB2 Pins are for the two legs of the logo

void getAnalogColor(int r1, int g1, int b1, int r2, int g2, int b2);

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
      getAnalogColor(250, 25, 0, 
                     255, 255, 255);
    break;

    // Blue OW Logo
    case blue:
      getAnalogColor(0, 0, 255, 
                     0, 255, 255);
    break;
    
    // Green OW Logo
    case green:
      getAnalogColor(0, 255, 0, 
                     50, 255, 50);
    break;

    // Red OW Logo
    case red:
      getAnalogColor(255, 0, 0, 
                     255, 10, 30);
    break;

    // Yellow OW Logo
    case yellow:
      getAnalogColor(204, 80, 0, 
                     204, 80, 30);
    break;

    // RGB OW Logo
    case rgb:
      for(int i=0;i<=255;i+=3)
        {
          analogWrite(R1Pin,255-i);
          analogWrite(R2Pin,255-i);
          analogWrite(G1Pin, i);
          analogWrite(G2Pin, i);
          delay(10);
        }
      for(int i=0;i<=255;i+=3)
        {
          analogWrite(G1Pin,255-i);
          analogWrite(G2Pin,255-i);
          analogWrite(B1Pin, i);
          analogWrite(B2Pin, i);
          delay(10);
        }
      for(int i=0;i<=255;i+=3)
        {
          analogWrite(B1Pin,255-i);
          analogWrite(B2Pin,255-i);
          analogWrite(R1Pin, i);
          analogWrite(R2Pin, i);
          delay(10);
        }
    break;
    // Classic OW Logo
    default:
      getAnalogColor(250, 25, 0, 
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
      delay(2000);

      modeSelect++;

}

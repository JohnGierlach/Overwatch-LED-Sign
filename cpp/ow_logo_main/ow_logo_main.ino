#define R1Pin 3
#define G1Pin 5
#define B1Pin 6
#define R2Pin 9
#define G2Pin 10
#define B2Pin 11

const char modeSelect;
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
  Serial.begin(115200);
  Serial.println("Bluetooth is now avaliable!");
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
      
    case classic:
    break;
    case blue:
    break;
    case green:
    break;
    case red:
    break;
    case yellow:
    break;
    case rgb:
    break;
    // Classic
    default:
    break;
  }
}

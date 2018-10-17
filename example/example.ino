
#include <Adafruit_Microbit.h>

Adafruit_Microbit_Matrix microbit;

const int buttonB = 11;     // the number of the pushbutton pin

const uint8_t
  smile_bmp[] =
  { B00000,
    B00001,
    B10010,
    B01100,
    B01000, };

    
void setup() {
  Serial.begin(9600);
  Serial.println("Welcome to IOT!");
  microbit.begin();
  pinMode(buttonB, INPUT);  
}

void loop() {
  // draw a custom made bitmap face
  microbit.show(smile_bmp);

  if (! digitalRead(buttonB)) {
     microbit.show(microbit.HEART);
     delay(500);
  }

  else {
     microbit.show(smile_bmp);
  }
}



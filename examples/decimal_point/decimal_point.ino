#include "bu9796.h"

BU9796 display;

int counter = 1;

void setup()
{
  //init BU9796
  display.begin();
}

void loop()
{
  //clear display buffer
  display.clearBuffer();
  //set decimal point
  display.setDecimalPoint(counter);
  //write buffer to BU9796 RAM
  display.update();

  //increment counter variable
  counter++;
  
  //reset counter
  if(counter>4)
  {
    counter = 1;
  }

  delay(1000);
}
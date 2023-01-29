#include "bu9796.h"

BU9796 display;
int counter = 0;

void setup()
{
  //init BU9796
  display.begin();
}

void loop()
{
  //write new counter value to buffer
  display.writeValue(counter);
  //write buffer to BU9796 RAM
  display.update();

  //increment counter variable
  counter++;
  
  //reset counter
  if(counter>9999)
  {
    counter = 0;
  }

  delay(1000);
}


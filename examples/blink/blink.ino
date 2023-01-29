#include "bu9796.h"

BU9796 display;

void setup()
{
  //init BU9796
  display.begin();
  
  //enable all segments
  display.fill(1);

  //toggle all segements every 1000ms
  display.blink(1000);
}

void loop()
{
  //nothing to see here...
}

#include <iostream>
#include"packages/defaults.h"

//Returns the volume of a box
//if no height is given, the height is assumed to be 1.
//If neither height nor width is given, both are assumed to be 1.

int main()
{
  showVolume(4,6,2);
  showVolume(4,6);
  showVolume(4);

  return 0;
}



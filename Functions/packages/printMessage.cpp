#include "printMessage.h"
#include<iostream>

void printMessage(void)
{
  using std::cout;

  int static times = 0;
  times++;
  cout<<"This function called "<< times <<" times\n";
}

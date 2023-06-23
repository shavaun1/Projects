#include"byValue.h"
#include<iostream>

void doubleIt(int y)
{
  using std::cout;
  using std::endl;
  y = 2 * y;
  cout<<"After double in the function, y is"<< y << endl;
}

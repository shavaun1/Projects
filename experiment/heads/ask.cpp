#include"ask.h"
#include <iostream>
#include<math.h>
using std::cout;
using std::endl;

 
Ask::Ask(int x, int y)
{
  a = x;
  b = y;

}

int Ask::sum()
{
  return a + b;
}

void Ask::quest()
{
  cout<<"So what is your name? "<<endl;
  return;
}

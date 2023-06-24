#include"global.h"
#include<iostream>



void first()
{
  using std::cout;
  using std::endl;

  int x = 25;
  cout<<"local x in the function first is "<< x << endl;

}

void second()
{
  using std::cout;
  using std::endl;

 int x = 10;

  cout<<"local x in the function second is "<< x << endl;
}


#include"static.h"
#include<iostream>

void first1()
{
  using std::cout;
  using std::endl;
  int x = 25;
  cout<<"local x in the function first is "<< endl;
  x++;
}

void second1()
{
  using std::cout;
  using std::endl;
  static int x = 1;
  cout<<"This function is called "<<" times "<< endl;
}

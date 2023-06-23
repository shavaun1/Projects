#include<iostream>
#include"packages/byValue.h"


int main()
{
  using std::cout;
  using std::endl;

  int x = 10;
  cout<<"Before calling the function doubleIt, x is "<< x << endl;
  doubleIt(x);
  cout<<"After calling the function doubleIt, x is "<< x << endl;
  return 0;
}


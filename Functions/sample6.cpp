#include"packages/sample6.h"
#include<iostream>

int main()
{
  using std::cout;
  int x = 5, y = 3, z;
  z = subtraction(7,2);

  cout<<"The first result is "<<z<<'\n';
  cout<<"The second result is "<< subtraction(7,2)<<'\n';
  cout<<"The third result is "<<subtraction(x,y)<<'\n';
  z = 4+subtraction(x,y);
  cout<<"The fourt result is "<<z<<'\n';
  return 0;
}

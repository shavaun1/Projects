#include<iostream>
#include "func1.h"

void test(int arg1, double arg2)
{
  using std::cout;
  using std::endl;

  cout<<"\n In function test()."
    <<"\n 1.argument: "<< arg1
    <<"\n 2.argument: "<< arg2 << endl;
}


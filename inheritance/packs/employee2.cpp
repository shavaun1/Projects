#include"employee2.h"
#include<iostream>

using std::endl;
using std::cout;

double Employee2::taxRate = 0.07;
Employee2::Employee2(int num)
{
  idNum = num;
}

void Employee2::display()
{
  cout<<"Employee number "<<idNum
    <<" has a tax rate of "<<taxRate<<endl;
  return;
}

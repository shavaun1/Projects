#include"change.h"
#include<iostream>
#include<string>


void Output(string coin, int amount)
{

  if(amount > 0)
  {
    using std::cout;
    using std::endl;
    cout<<"# "<< coin << " =\t"<< amount << endl;
  }
}

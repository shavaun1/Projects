#include<iostream>
#include<iomanip>
#include"packages/power.h"

int main()
{

  using std::cout;
  using std::endl;
  using std::setw;
  for(int i{-3}; i <= 3; ++i)
    cout<< setw(10) << power(8.0, i);
  cout<< endl;

}

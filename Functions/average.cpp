#include<iostream>
#include<string>
#include"packages/average.h"


int main()
{
  using std::cout;
  using std::endl;

  int isum = 0;
  double dsum = 0.0;

  cout<< average(10, isum)<< " int aaverage"<< endl;
  cout<< average(10, dsum)<<" double average"<< endl;
}

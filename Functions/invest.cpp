#include <iostream>
#include <iomanip>
#include"packages/invest.h"


int main()
{

  using std::cout;
  using std::cin;
  using std::endl;

  int principal, time;
  float rate;

  cout<<"ENter principal: ";
  cin >> principal;
  cout << "\nEnter rate of interest (as a percentage): ";
  cin >> rate;
  cout <<"\n Enter time (in years): ";
  cin >> time;
  cout <<"\n\nFinal value : ";
  cout<< setiosflags(std::ios::fixed)<< std::setprecision(2);
  cout<< compound(principal,rate,time);

  return 0;
}



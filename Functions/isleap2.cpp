#include<iostream>
#include"packages/isleap2.h"

int main()
{

  using std::cout;
  using std::cin;
  using std::endl;

  int year;
  cout<<"enter a year ";
  cin>> year;
  if(IsLeapYear(year))
  {
    cout<<year<<" has 366 days, it is a leap year"<< endl;
  }
  else
  {
    cout<<year<<" has 365 days, it is NOT a leap year"<< endl;
  }
  return 0;
}

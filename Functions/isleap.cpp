#include<iostream>
#include"packages/isleap.h"


int main()
{

  using std::cout;
  using std::endl;
  using std::cin;
  int year;
  cout<<"enter a year: ";
  cin >> year;
  if(IsleapYear(year))
  {
    cout<<year <<" has 366 days, it is a leap year"<< endl;
  }
  else
  {
    cout<<year<<" has 365 days, it is NOT a leap year"<< endl;
  }
  return 0;
}

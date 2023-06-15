#include<iostream>
using namespace std;

bool IsLeapYear(int year)
{
  return(year % 400 == 0) || ( year % 4 == 0 && year % year % 100 != 0 );
}

int main()
{
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

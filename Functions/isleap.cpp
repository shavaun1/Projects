#include<iostream>
using namespace std;

bool IsleapYear(int year)
{
  if(year % 400 == 0)
  {
    return true;
  }
  else if(year % 100 == 0)
  {
    return false;
  }
  else if(year % 4 == 0)
  {
    return true;
  }
  return false;
}

int main()
{
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

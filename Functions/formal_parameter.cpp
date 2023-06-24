#include<iostream>
#include"packages/formal.h"



double fee(int hoursWorked, int minutesWorked);
//returns the charges for hoursWorked hours and 
//minutesWorked minutes of legal services.

int main()
{

  using std::cout;
  using std::cin;
  using std::endl;
  int hours, minutes;
  double bill;

  cout<<"Welcome to the law office of\n"
    <<"Dewey, Cheatham, and HOw.\n"
    <<"The law office with a heart.\n"
    <<"Enter the hours and minutes"
    <<" of your consultation:\n";
  cin >> hours >> minutes;

  bill = fee(hours, minutes);

  cout.setf(std::ios::fixed);
  cout.setf(std::ios::showpoint);
  cout.precision(2);
  cout<<"For "<< hours <<" hours and "<<minutes
    <<" minutes, your bill is $"<< bill <<endl;
  return 0;
}



#include<iostream>
using namespace std;

const double RATE = 150.00;

double fee(int hoursWorked, int minutesWorked);
//returns the charges for hoursWorked hours and 
//minutesWorked minutes of legal services.

int main()
{
  int hours, minutes;
  double bill;

  cout<<"Welcome to the law office of\n"
    <<"Dewey, Cheatham, and HOw.\n"
    <<"The law office with a heart.\n"
    <<"Enter the hours and minutes"
    <<" of your consultation:\n";
  cin >> hours >> minutes;

  bill = fee(hours, minutes);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout<<"For "<< hours <<" hours and "<<minutes
    <<" minutes, your bill is $"<< bill <<endl;
  return 0;
}

double fee(int hoursWorked, int minutesWorked)
{
  int quartedHours;

  minutesWorked = hoursWorked*60 + minutesWorked;
  quartedHours = minutesWorked/15;
  return(quartedHours * RATE);
}

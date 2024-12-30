//Calculating compound interest
#include<iostream>
#include<iomanip>
#include<math.h>

using std::cout; using std::endl; using std::setiosflags; using std::ios;
using std::setw; using std::setprecision;

int main()
{
  double amount, principal = 1000.0, rate = .05;

  cout<<"Year"<< setw( 21 )
    <<"Amount on deposit"<< endl;

  for(int year = 1; year <= 10; year++){
    amount = principal * pow(1.0 + rate, year);
    cout<< setw(4)<<year
      <<setiosflags(ios::fixed | ios::showpoint)
      <<setw(21)<<setprecision(2)
      <<amount<<endl;
  }

  return 0;
}

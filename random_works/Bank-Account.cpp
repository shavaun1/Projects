#include <cstddef>
#include <cstddef>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<string>
#include<fstream>
#include<cctype>
#include<climits>
#include <iostream>
#include <type_traits>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>



//Bank account..


using namespace std;

class BankAccount
{
  public:

    BankAccount(int dollars, int cents, double rate);
    BankAccount(int dollars, double rate);
    BankAccount();

    void set(int dollars, int cents, double rate);
    void set(int dolars, double rate);
    void update();

    double getBalance();
    double getRate();

    void output(ostream& outs);

  private:
    double balance;
    double interestRate;

    double fraction(double percentageValue);

};

int main()
{
  BankAccount account1(100, 2.3), account2;
  cout << "account1 initialized as follows:\n";
  account1.output(cout); 
  cout<<"account2 initialized as follows: \n";
  account1.output(cout);
  account1.set(100,5.0);

  account1 = BankAccount(999, 99, 5.5);
  cout<<"account1 reset to the following:\n";
  account1.output(cout);

  return 0;
  
}

BankAccount::BankAccount(int dollars, int cents, double rate)
{
  if((dollars < 0) || (cents < 0) || (rate < 0))
  {
    cout << "Illegal values for money or interest rate.\n";
    return;
  }
  balance = dollars + 0.01*cents;
  interestRate = rate;
}

BankAccount::BankAccount(int dollars, double rate)
{
  if((dollars < 0) || (rate < 0))
  {
    cout<< "Illegal values for money or interest rate.\n";
    return;
  }
  balance = dollars;
  interestRate = rate;
}

BankAccount::BankAccount() : balance(0), interestRate(0.0)
{

}


void BankAccount::set(int dollars, int cent, double rates)
{
  if((dollars < 0) || (cent < 0) || (rates < 0))
  {
    cout << "Illegal values for money or interest rate. \n";
    return;
  }
  balance = dollars + 0.01*cent;
  interestRate = rates;
}

void BankAccount::set(int dollars, double rates)
{
  if((dollars < 0) || (rates < 0))
  {
    cout<<"Illegal values for moeny or inetrest rate.\n";
    return;
  }

  balance = dollars;
  interestRate = rates;
}

void BankAccount::update()
{
  balance = balance + fraction(interestRate)*balance;

}

double BankAccount::fraction(double percentageValue)
{
  return (percentageValue / 100.0);
}

double BankAccount::getBalance()
{
  return balance;
}

double BankAccount::getRate()
{
  return interestRate;
}

void BankAccount::output(ostream& outs)
{
  outs.setf(ios::fixed);
  outs.setf(ios::showpoint);
  outs.precision(2);
  cout<<"Acount balance $"<<balance << endl;
  outs << "interestRate rates "<< interestRate <<"%"<<endl;
}












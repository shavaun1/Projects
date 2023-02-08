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
     void set(int dollars, double rate);
     void update();

     double getBalance();
     double getRate();

     void output(ostream& outs);

     private:

     double balance;
     double interestRate;
     double fraction(double percent);


};

class SavingAccount : public BankAccount
{
  public:
    SavingAccount(int dollars, int cents, double rate);

    void deposit(int dollars, int cents);
    void withdraw(int dollars, int cents);

  private:
};

int main()
{
  SavingAccount account(100, 50, 5.5);
  account.output(cout);
  cout<<endl;
  account.deposit(10, 25);
  account.output(cout);
  cout<<endl;
  cout<<"Withdrwaing $11.80."<<endl;
  account.withdraw(11,80);
  account.output(cout);
  cout<<endl;
  return 0;
}

BankAccount::BankAccount(int dollars, int cents, double rate)
{
  if((dollars < 0) || (cents < 0) || (rate < 0))
  {
    cout<<"Illegal values for money or interest rate.\n";
    return;
  }
  balance = dollars + 0.01 * cents;
  interestRate =  rate;

}

BankAccount::BankAccount(int dollars, double rate)
{
  if((dollars < 0) || (rate < 0))
  {
    cout<<"Illegal values for money or interest rate.\n";
    return;

  }
  balance = dollars;
  interestRate = rate;
}

BankAccount::BankAccount():balance(0),interestRate(0.0)
{

}

void BankAccount::set(int dollars, int cents, double rate)
{
  if((dollars < 0) || (cents < 0) || (rate < 0))
  {
    cout<<"Illegal values for money or interest rate.\n";
    return;
  }
  balance = dollars + 0.01*cents;
  interestRate = rate;
}

void BankAccount::set(int dollars, double rate)
{
  if((dollars < 0) || (rate < 0))
  {
    cout<<"Illegal value for money or interest rate.\n";
    return;
  }
  balance = dollars;
  interestRate =  rate;
}

void BankAccount::update()
{
  balance = balance + fraction(interestRate)*balance;
}

double BankAccount:: fraction(double percentValue)
{
  return(percentValue / 100.0);
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
  outs<<"Account balance $"<<balance<<endl;
  outs<<"Interest rate "<<interestRate<<"%"<<endl;
}

SavingAccount::SavingAccount(int dollars, int cents, double rate):
  BankAccount(dollars, cents, rate)
{

}

void SavingAccount::deposit(int dollars, int cents)
{
  double balance = getBalance();
  balance += dollars;
  balance += (static_cast<double>(cents)/100);
  int newDollars = static_cast<int>(balance);
  int newCents = static_cast<int>((balance - newDollars)*100);
  set(newDollars, newCents, getRate());
}

void SavingAccount::withdraw(int dollars, int cents)
{
  double balance = getBalance();
  balance -= dollars;
  balance -= (static_cast<double_t>(cents)/ 100);
  int newDollars = static_cast<int>(balance);
  int newCents = static_cast<int>((balance - newDollars)*100);
  set(newDollars, newCents, getRate());
}















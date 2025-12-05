#include <format>
#include<iostream>
#include"point/DivideByZeroException.h"

using std::format; using std::cout; using std::cin;

//performs division only if the denominator is mot zero;
//otherwise, throws DividebyZeroException object

double quotient(double numerator, double denominator)
{
  //throw DivideByZeroException if trying to division by zero
  if(denominator == 0.0)
  {
    throw DividebyZeroException{};
  }
  //return division result
  return numerator / denominator;
}

int main()
{
  int number1{1}; // user-specified numerator
  int number2{0};

  cout<<"Enter tow intgers(end-of-file to end): ";

  //enable user to enter two intgers to divide
  while(cin >> number1 >> number2)
  {
    //try block contains code that might throw exception
    //and code that will not execute if an exception occurs
    try
    {
      double result{quotient(number1, number2)};
      cout<<format("The quotients is: {}\n", result);
    }
    catch(const DividebyZeroException& divideByZeroException)
    {
      cout<<format("Exception occured: {}\n", divideByZeroException.what());
    }
    cout<<"\nEnter two intgers (end-of-file tp end): ";
  }
  cout<<'\n';
}

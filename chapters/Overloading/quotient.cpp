#include<iostream>
using std:: cout;

double quotient(double numerator, double denominator)
  [[pre: denominator != 0.0]];

  int main()
{
  cout<<"Quotient(100,7): "<<quotient(100,7)
    <<"\nquotient(100,0): "<<quotient(100,0) << '\n';
}

//perform division
double quotient(double numerator, double denominator)
{
  return numerator / denominator;
}

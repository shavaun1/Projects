//Addtion program

#include<iostream>
using std::cout; using std::cin;
using std::endl;

int main()
{
  int number1{0}, number2{0}, sum{0};

  cout<<"Enter first integer\n";
  cin>> number1;
  cout<<"Enter second integer\n";
  cin>> number2;
  sum = number1 + number2;
  cout<<"Sum is "<< sum << endl;

  return 0;
}

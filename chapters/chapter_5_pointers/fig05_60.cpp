#include "point/fig05_60.cpp"
#include<format>
#include<iostream>

using std::cout; using std::format;

int main()
{
  int number{5};
  cout<<format("Original value of number is {}\n", number);
  number = cubeByValye(number);
  cout<<format("New value of number is {}\n", number);
}

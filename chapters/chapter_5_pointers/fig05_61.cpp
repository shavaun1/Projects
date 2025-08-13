#include "point/fig05_61.cpp"
#include<format>
#include<iostream>

using std::cout; using std::format;

int main()
{
  int number{5};

  cout<<format("Orginal value of number is {}\n", number);
  cubeByReference(&number);
  cout<<format("New value of number is {}\n", number);
}

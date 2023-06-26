#include<iostream>
#include"packages/num2eng.h"

int main()
{

  using std::cout;
  using std::cin;
  using std::endl;

  int number;
  cout<<"Enter number between 0 and 99: ";
  cin >> number;
  cout<< number << " = "<< NumToString(number)<< endl;
  return 0;
}

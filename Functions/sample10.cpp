#include<iostream>
#include"packages/sample10.h"

int main()
{
  using std::cout;
  using std::cin;

  long number;
  cout<<"PLease type a number: ";
  cin>>number;
  cout<<number<<"!="<< factorial(number);
  return 0;
}

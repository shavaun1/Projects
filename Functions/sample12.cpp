#include"packages/sample12.h"
#include<iostream>

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;
  using std::ios;
  
  double price, bill;
  int number;

  cout<<"Enter the number of items purchased: ";
  cin>>number;
  cout<<"Enter the price per item $";

  bill = totalCost(number, price);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout<<number<<" items at "
    <<"$"<< price <<" each.\n"
    <<"Final bill, including tax, is $"<< bill
    <<endl;

  return 0;
}

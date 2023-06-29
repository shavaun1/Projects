#include<iostream>
#include"packages/random.h"


int main()
{
  using std::cout;
  using std::cin;
  using std::endl;
  double price, bill;
  int number;

  cout<<"Enter the number of items purchased: ";
  cin >> number;
  cout<<"Enter the price per item $";
  cin >> price;

  bill = totalCost1(number, price);

  cout.setf(std::ios::fixed);
  cout.setf(std::ios::showpoint);
  cout.precision(2);
  cout<<number<<" iteams at "
    <<"$"<<price<<" each.\n"
    <<"Final bill, including tax, is $"<<bill
    <<endl;

  return 0;
}

double totalCost(int numberParameter, double priceParameter)
{
  const double TAXRATE = 0.5;
  double subtotal;

  subtotal = priceParameter * numberParameter;
  return (subtotal + subtotal * TAXRATE);
}

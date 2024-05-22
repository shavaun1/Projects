#include <iostream>
#include "sample3.h"

void menu()
{
  using std::cout;
  using std::endl;
  cout<<"Here are the items available:"<<endl;
  cout<<"Soda:$1.00"<<endl;
  cout<<"Fries:$1.50"<<endl;
  cout<<"Sandwich:$2.00"<<endl;
  cout<<endl;
}

//This function uses the quantities of items selected to calculate the total cost.
double totalcost(int a, int b, int c){
  double costsoda = a *1.00;
  double costfries = b*1.50;
  double costsandwich = c *2.00;
  double totalsum = costsoda + costfries + costsandwich;
  return totalsum;
}

// This void function outputs the receipt.
void receipt(int a, int b, int c, int sum){
  using std::endl;
  using std::cout;
  if(a != 0){
    cout<<"Soda:"<<a<<endl;
  }
  if(b !=0){
    cout<<"Fries:"<<b<<endl;
  }
  if(c != 0){
    cout<<"Sandwich"<<c<<endl;
  }
  cout<<"Total:$"<<sum<<endl;
}

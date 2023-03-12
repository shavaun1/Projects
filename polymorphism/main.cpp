#include <iostream>
#include "sale.h"
#include "DiscountSale.h"

using namespace std;
using namespace salesavitch;

int main()
{
  Sale simple(10.0);
  DiscountSale discount(11.00, 10);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  if(discount < simple)
  {
    cout<<"Discounted item is cheaper. \n";
    cout<<"Saving is $"<< simple.savings(discount)<<endl;
  }
  else
    cout<<"Discounted item is not cheper.\n";

  return 0;
}

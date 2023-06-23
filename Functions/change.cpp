#include<iostream>
#include<string>
#include"packages/change.h"


int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  int amount; 
  int quarters, dimes, nickels, pennies;

  cout<<"make changes in coins for what amount: ";
  cin >> amount;

  quarters = amount/25;
  amount = amount - quarters*25;

  dimes = amount/10;
  amount = amount - dimes*10;

  nickels = amount/5;
  amount = amount - nickels*5;

  pennies = amount;

  Output("quarters", quarters);
  Output("dimes", dimes);
  Output("nickels", nickels);
  Output("pennies", pennies);

  return 0;
}

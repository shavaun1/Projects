#include<iostream>
#include<string>
using namespace std;

void Output(string coin, int amount)
{
  if(amount > 0)
  {
    cout<<"# "<< coin <<" =\t"<< amount << endl;
  }
}

int main()
{
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

#include "packages/sample3.h"
#include <iostream>

int main()
{
  using std::endl;
  using std::cout;
  using std::cin;
  int s = 0;
  int f = 0;
  int sn = 0;
  double cost = 0.0;
  menu();
  cout<<"How many sodas? :";
  cin >> s;
  cout<<"How many fry orders :";
  cin>>f;
  cout<<endl;
  cout<<"How many sandwiches? :";
  cin>>sn;
  cout<<endl;
  cost = totalcost(s,f,sn);
  receipt(s,f,sn,cost);
  return 0;
}

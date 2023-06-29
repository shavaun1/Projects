#include <iostream>
#include "packages/paramter.h"

int makeSum(int, int);

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  int a,b,sum;
  cout<<"Enter two integers: ";
  cin >> a >> b;
  sum = makeSum(a,b);

  cout<<"Sum is: "<<sum<<endl;
  return 0;
}


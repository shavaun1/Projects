#include <iostream>
#include"packages/makeSum.h"


int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  int a, b, sum;
  cout << "Enter two integers: ";
  cin >> a >> b;
  int add = makeSum(a, b, sum);
  cout << "Sum of your numbers is "<< add << endl;
  return 0;
}



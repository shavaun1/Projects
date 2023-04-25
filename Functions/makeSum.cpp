#include <iostream>
using namespace std;

int makeSum(int, int, int);

int main()
{
  int a, b, sum;
  cout << "Enter two integers: ";
  cin >> a >> b;
  int add = makeSum(a, b, sum);
  cout << "Sum of your numbers is "<< add << endl;
  return 0;
}

int makeSum(int x, int y, int z)
{
  z = x + y;
  
  return z;
  
}

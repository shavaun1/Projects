#include <iostream>
using namespace std;

int makeSum();

int main()
{
  int sum = makeSum();
  cout << sum << endl;
  return 0;
}

int makeSum()
{
  int a,b;
  cout<<"Enter two integers: ";
  cin >> a >> b;
  return a + b;
}

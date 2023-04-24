#include <iostream>
using namespace std;

int makeSum(int, int);

int main()
{
  int a,b,sum;
  cout<<"Enter two integers: ";
  cin >> a >> b;
  sum = makeSum(a,b);

  cout<<"Sum is: "<<sum<<endl;
  return 0;
}

int makeSum(int x, int y)
{
  return x + y;
}

#include <iostream>
using namespace std;

int max(int, int);
int max(int, int, int);

int main()
{
  int x,y,z;
  cout<<"PLease enter three numbers: ";
  cin>>x>>y>>z;
  cout<<"max of "<<x<<" "<< y<<" "<< z<<" is:";
  cout<< max(x,y,z)<<endl;

  return 0;
}

int max(int a, int b)
{
  return (a > b ? a : b);
}

int max(int a, int b, int c)
{
  return max(max(a,b),c);
}

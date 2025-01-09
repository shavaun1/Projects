//Finding the maximum of three integers
#include<iostream>

using std::cout; using std::endl; using std::cin;

int maximum(int, int, int);

int main()
{
  int a, b, c;

  cout <<"Enter three integers: ";
  cin >> a >> b >> c;

  cout<<"Maximum is: "<< maximum(a,b,c) << endl;

  return 0;
}

int maximum(int x, int y, int z)
{
  int max = x;
  if(y > max)
    max = y;
  if(z > max)
    max = z;

  return max;
}

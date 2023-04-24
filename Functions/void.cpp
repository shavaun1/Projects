#include<iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void makeSum();

int main()
{
  makeSum();
 // system("PAUSE");
  return 0;
}

void makeSum()
{
  int a,b,sum;
  cout <<"Enter two integers: ";
  cin >> a >> b;
  sum = a + b;
  cout <<"Sum is : "<< sum << endl;
}

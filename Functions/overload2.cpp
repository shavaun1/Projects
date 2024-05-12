#include<iostream>
#include"packages/overload2.h"

int main()
{
  using std::cout;
  using std::endl;
  int a = 5, b = 6, c = 2;
  double d = 5.5;

  cout<<"Product of a and b = "<< product(a,b)<< endl;
  cout<<"Product of a, b and c = "<<product(a,b,c)<<endl;
  cout<<"Product of b and d = "<<product(b,d)<<endl;
  return 0;


}

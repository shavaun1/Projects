#include<iostream>
#include"packages/sample2.h"

int main()
{
  using std::cout;
  using std::endl;
  int  y = 2;
  double z;
  z = (power(y+2) -power(y))/ power(y);
  cout  <<"power(y) ="<<power(y)<<"\n";
  cout<<"power(y+2) = "<<power(y+2)<<" ,and z = "<<z<<endl;
  return 0;

}

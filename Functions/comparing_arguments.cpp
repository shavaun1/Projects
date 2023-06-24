#include<iostream>
#include"packages/comparing.h"

//par1Value is a call-by-value formal parameter and 
//par2Ref is a call by-reference formal parameter.

int main()
{
  using std::cout;
  using std::endl;

  int n1, n2;

  n1 = 1;
  n2 = 2;
  DoStuff(n1,n2);
  cout<<"n1 after function call = "<< n1 << endl;
  cout<<"n2 after function call = "<<n2 << endl;
  return 0;
}


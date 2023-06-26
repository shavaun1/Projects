#include <iostream>
#include"packages/order1.h"



int main()
{
  using std::cout;
  using std::endl;

  int i = 7, j = 3;
  cout<< i << '\t' << j << endl;
  order(&i, &j);
  cout<<i <<'\t' << j << endl;
}



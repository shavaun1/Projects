#include <iostream>
#include"packages/func1.h"

void test(int, double);

int main()
{
  using std::cout;
  using std::endl;

  cout<<"\nNow function test() will be called.\n";
  test(10, -7.5);
  cout<<"\nAnd back again in main()."<<endl;

  return 0;
}



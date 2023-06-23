#include<iostream>
#include "packages/another_overload.h"



//Return the average of the two numbers n1 and n2

//Return the average of the three numbers n1, n2, and m3.

int main()
{

  using std::cout;
  using std::cin;
  using std::endl;
  cout<<"The average of 2.0, 2.5, and 3.0 is "
    <<ave(2.0, 2.5, 3.0)<<endl;
  cout<<"The average of 4.5 and 5.5 is "
    <<ave(4.5,5.5)<<endl;

  return 0;
}


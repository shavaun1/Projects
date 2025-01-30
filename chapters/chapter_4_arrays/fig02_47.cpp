//Static arrays are initialized to zero

#include<iostream>
#include"header/fig02_47.h"

using std::cout; using std::endl;

int main()
{
  cout<<"First call to each function:\n";
  staticArrayInit();
  automaticArrayInit();
  cout<< endl;

  cout<<"\n\nSecond call to each function:\n";
  staticArrayInit();
  automaticArrayInit();
  cout<<endl;

  return 0;
}

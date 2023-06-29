#include <iostream>
#include"packages/overload.h"


int main()
{
  using std::cout;
  using std::cin;
  using std::endl;
  int x,y,z;
  cout<<"PLease enter three numbers: ";
  cin>>x>>y>>z;
  cout<<"max of "<<x<<" "<< y<<" "<< z<<" is:";
  cout<< max(x,y,z)<<endl;

  return 0;
}



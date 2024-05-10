#include<iostream>
#include"packages/sample.h"

int main()
{
  using std::cout;
  using std::endl;

  int n;
  cout<<"  Number \t  Square"<<endl;
  for(n = 0; n <= 5; ++n)
    cout<<" "<<n<<"   \t"<<Function(n)<<endl;
  return 0;

}

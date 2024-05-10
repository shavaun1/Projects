#include<iostream>
#include"packages/sample1.h"

int main()
{
  using std::cout;
  using std::endl;

  int n,m;
  cout<<"n    m    Sum of Squares"<<endl;

  for(int i = 0; i <=5; i++)
  {
    n = i;
    m = 2*i;
    cout<<n<<"\t"<<m<<"\t"<<Funct(n,m)<< endl;
  }
  return 0;
}

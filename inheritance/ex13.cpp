#include"packs/datep.h"
#include<iostream>
using std::cout;
using std::endl;

int main()
{
  Datep a(4,1,2012),b(12,18,2010),c(4,1,2012);
  if(a==b)
    cout<<"Dates a and b are the same."<<endl;
  else
    cout<<"Dates a and b are not the same."<<endl;
  if(a==c)
    cout<<"Dates a and c are the same."<<endl;
  else
    cout<<"Dates a and c are not the same."<<endl;
  return 0;
}

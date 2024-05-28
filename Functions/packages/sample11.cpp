#include"sample11.h"
#include<iostream>

void printarray(int arg[], int length)
{
  using std::cout;
  for(int n=0; n<length; n++)
    cout<<arg[n]<<"";
  cout<<"\n";
}

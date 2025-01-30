#include<iostream>
#include"fig02_48.h"

using std::cout; using std::endl;

void modifyArray(int b[], int sizeOFarray)
{
  for(int j = 0; j < sizeOFarray; j++)
    b[j] *=2;
}

void modifyElement(int e)
{
  cout<<"Value in modifyElement is "<<(e *= 2) << endl;
}

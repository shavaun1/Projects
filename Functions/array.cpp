#include<iostream>
#include "packages/array.h"

int main()
{
  using std::cout;
  using std::endl;

  const int size = 6;

  double a[size] = {0.5, 1.5, 6.0, 7.5, 2.3, 4.6};

  cout<<"Test array data processing"<< endl;
  cout<<"average = "<< average(a,size) << endl;
  cout <<"minimum = "<< minimum(a, size)<< endl;
  cout <<"sum "<< sum(a, size) << endl;
}


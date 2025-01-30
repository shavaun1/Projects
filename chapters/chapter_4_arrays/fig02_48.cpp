//passing arrays and individual array elements to fucntions
#include<iostream>
#include<iomanip>
#include"header/fig02_48.h"

using std::cout; using std::endl; using std::setw;

int main()
{
  const int arraySize = 5;
  int i, a[arraySize] = {0,1,2,3,4};

  cout<<"Effects of passing entire array call-by-refernce:"
    <<"\n\nThe value of the original array ars: \n";

  for(i = 0; i < arraySize; i++)
    cout<<setw(3)<< a[i];

  cout<<endl;

  //array a passed call-by-reference
  modifyArray(a, arraySize);

  cout<<"The values of teh modify array are:\n";

  for(i = 0; i < arraySize; i++)
    cout<<setw(3)<<a[i];

  cout<<"\n\n\n"
    <<"Effects of passing array elements call-by-value:"
    <<"\n\nThe value of a [3] is "<<a[3]<<'\n';

  modifyElement(a[3]);

  cout<<"The value of a [3] is "<<a[3]<<endl;

  return 0;
}

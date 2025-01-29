//Compute the sum of the elements of the array
#include<iostream>

using std::endl; using std::cout;

int main()
{
  const int arraySize = 12;
  int a[arraySize] = {1,3,5,4,7,2,99,16,45,67,89,45};

  int total = 0;

  for(int i = 0; i < arraySize; i++)
    total += a[i];

  cout<<"Total of array element value is "<< total << endl;
  return 0;
}

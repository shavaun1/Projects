#include"header/fig02_51.h"
#include<iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
  const int arraySize = 15;
  int a[arraySize], key, result;

  for(int i = 0; i < arraySize; i++)
    a[i] = 2 * i;

  cout<<"ENter a number between 0 and 28: ";
  cin>> key;

  printHeader(arraySize);
  result = binarySearch(a, key, 0, arraySize - 1, arraySize);
  if(result !=-1)
    cout<<'\n'<<key<<"found in array element "
      <<result << endl;
  else
    cout<<'\n'<<key <<" not found"<< endl;

  return 0;
}

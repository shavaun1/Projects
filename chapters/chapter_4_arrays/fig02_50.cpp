#include"header/fig02_50.h"
#include<iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
  const int arraySize = 100;
  int a[arraySize], searchKey, element;

  for(int x = 0; x < arraySize; x++)
    a[x] = 2 * x;

  cout<<"Enter inetger search key:"<<endl;
  cin>> searchKey;
  element = linearSearch(a, searchKey, arraySize);

  if(element != -1)
    cout<<"Found value in element "<< element << endl;
  else
    cout<<"Value not found" << endl;

  return 0;
}

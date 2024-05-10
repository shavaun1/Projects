#include"searching.h"
#include <iostream>


void fillArray(int a[], int size, int& numberUsed)
{
  using std::cout;
  using std::cin;

  cout<<"Enter up to "<<size <<" nonnegative whole numbers.\n"
    <<"Mark the end of the list with a nonnegative number.\n";
  int next, index = 0;
  cin >> next;
  while((next >= 0) &&(index < size))
  {
    a[index] = next;
    index++;
    cin >> next;
  }
  numberUsed = index;
}

int search(const int a[], int numberUsed, int target)
{
  int index = 0;
  bool found = false;
  while((!found) && (index < numberUsed))
    if(target == a[index])
      found = true;
    else
      index++;

  if(found)
    return index;
  else
    return -1;
}

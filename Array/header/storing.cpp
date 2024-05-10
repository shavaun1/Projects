#include "storing.h"
#include <iostream>

void fillsArray(int a[], int size, int& numberUsed)
{
  using std::cout;
  using std::cin;

  cout<<"Enter up to "<< size << " nonnegative whole numbers.\n"
    <<"Mark the end of the list with a negative number.\n";
  int next, index = 0;
  cin >> next;
  while((next >= 0) && (index < size))
  {
    a[index] = next;
    index++;
    cin >> next;
  }
  numberUsed = index;

}

void sort(int a[], int numberUsed)
{
  int indexOfNextSmallest;
  for(int index = 0; index < numberUsed-1; index++)
  {
    indexOfNextSmallest = indexOfSmallest(a, index, numberUsed);
    swapValues(a[index], a[indexOfNextSmallest]);
  }
}

void swapValues(int& v1, int& v2)
{
  int temp;
  temp = v1;
  v1 = v2;
  v2 = temp;
}

int indexOfSmallest(const int a[], int startINdex, int numberUsed)
{
  int min = a[startINdex], indexOfMin = startINdex;
  for(int index = startINdex + 1; index < numberUsed; index++)
    if(a[index] < min)
    {
      min = a[index];
      indexOfMin = index;
    }
  return indexOfMin;
}

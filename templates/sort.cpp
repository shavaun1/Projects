#include<iostream>
using namespace std;

template<class T>
void swapValues(T& variable1, T& variable2)
{
  T temp;

  temp = variable1;
  variable1 = variable2;
  variable2 = temp;

}

template<class BaseType>
int indexOfSmallest(const BaseType a[], int starIndex, int numberUsed)
{
  BaseType min = a[starIndex];
  int indexOfMin = starIndex;

  for (int index = starIndex + 1; index < numberUsed; index++)
    if (a[index] < min)
    {
      min = a[index];
      indexOfMin = index;
    }

  return indexOfMin;
}

template<class BaseType>
void sort(BaseType a[], int numberUsed)
{
  int indexOfNextSmallest;
  for(int index = 0; index < numberUsed - 1; index++)
  {

    indexOfNextSmallest = indexOfSmallest(a,index, numberUsed);
  swapValues(a[index], a[indexOfNextSmallest]);

  }

}


#include"fig02_50.h"

int linearSearch(const int array[], int key, int sizeOfArray)
{
  for(int n = 0; n < sizeOfArray; n++)
    if(array[n] == key)
      return n;

  return -1;
}

#include<iostream>
#include "header/storing.h"


int main()
{
  using std::cout;
  using std::endl;
  cout<<"This program sorts numbers from lowest to highest.\n";

  int sampleArray[10], numberUsed;
  fillsArray(sampleArray, 10, numberUsed);
  sort(sampleArray, numberUsed);

  cout<<"In sorted order the numbers are:\n";
  for(int index = 0; index < numberUsed; index++)
    cout<< sampleArray[index] <<" ";
  cout<< endl;

  return 0;
}





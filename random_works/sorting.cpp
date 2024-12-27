#include <cstddef>
#include <cstddef>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<string>
#include<fstream>
#include<cctype>
#include<climits>
#include <iostream>
#include <type_traits>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>



typedef int* IntPtr;

void fill_array(int a[], int size);

void sort(int a[], int size);


int smallest(int a[],int start, int size);


void swap(int& v1, int& v2);

int main()
{

using namespace std;

cout<<"This program sorts numbers from lowest to highest. \n";

int arra_size;
cout<<"How many numbers will be sorted? ";
cin>> arra_size;

IntPtr a;
a = new int[arra_size];

fill_array(a, arra_size);
sort(a, arra_size);

cout<<"In sorted order the numbers are:\n";
for(int index = 0; index < arra_size; index++)
  cout<<a[index]<<" ";
cout<< endl;

delete [] a;



return 0;

}

void fill_array(int a[], int size)
{
  using namespace std;
  cout<<"ENter "<<size<<" integers in random order.\n";
  for(int index = 0; index < size; index++)
    cin>>a[index];
}

void sort(int a[], int size)
{
  int min;

  for(int i = 0; i < size-1; i++)
  {
    min = smallest(a,i,size);
    swap(a[i],a[min]);
  }
}

void swap(int& v1, int& v2)
{
  int temp;
  temp = v1;
  v1 = v2;
  v2 = temp;
}

int smallest(int a[],int start, int size)
{
  int min = a[start], indexM = start;
  for(int i = start + 1; i < size; i++)
    if(a[i] < min)
    {
      min = a[i];
      indexM = i;
    }
  return indexM;
}







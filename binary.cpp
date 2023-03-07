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



using namespace std;
const int ARRAY_SIZE = 10;

void search(const int[], int first, int last, int key, bool& found, int& location);

int main()
{
  int a[ARRAY_SIZE];
  const int finalIndex = ARRAY_SIZE - 1;

  int key, location;
  bool found;
  cout<<"ENter number to be located: ";
  cin>> key;
  search(a,0, finalIndex,key,found,location);

  if(found)
    cout<<key<<" is in index location "
      <<location<<endl;
  else
    cout<<key<<" is not in the array."<<endl;

  return 0;
}

void search(const int a[], int first, int last, int key, bool& found, int& location)
{
  int mid;
  if(first>last)
  {
    found = false;
  }
  else
  {
    mid = (first+last)/2;

    if(key == a[mid])
    {
      found = true;
      location = mid;
    }
    else if(key < a[mid])
    {
      search(a, first, mid-1, key, found, location);
    }
    else if(key>a[mid])
    {
      search(a,mid + 1, last, key, found, location);
    }
  }
}

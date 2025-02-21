#include"fig02_51.h"
#include<iostream>
#include<iomanip>

using std::cout; using std::endl; using std::cin; using std::setw;

int binarySearch(int b[], int searchKey, int low, int high, int size)
{
  int middle;

  while(low <= high){
    middle = (low + high)/2;

    printRow(b, low, middle, high, size);

    if(searchKey == b[middle])
      return middle;
    else if(searchKey < b[middle])
      high = middle - 1;
    else
      low = middle + 1;
  }

  return -1;
}

void printHeader(int size)
{
  cout<<"\nSubscripts:\n";
  for(int i = 0; i < size; i++)
    cout << setw(3)<< i <<' ';
  cout<<'\n';
  for(int i = 1; i <= 4 *size; i++)
    cout <<'-';
  cout<<endl;
}

void printRow(int b[], int low, int mid, int high, int size)
{
  for(int i = 0; i < size; i++)
    if(i < low || i > high)
      cout<<"    ";
    else if(i == mid)
      cout<<setw(3)<<b[i]<<'*';
    else
      cout<<setw(3)<<b[i]<<' ';
  cout<<endl;
}

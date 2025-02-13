#include "fig02_49.h"
#include<iostream>
#include<iomanip>

using std::cout; using std::fixed; using std::showpoint; using std::setiosflags;
using std::setprecision; using std::endl; using std::setw; using std::ios;

void mean(const int answer[], int arraySize)
{
  int total = 0;

  cout<<"*******\n Mean\n*******\n";

  for(int j = 0; j < arraySize; j++)
    total += answer[j];

  cout<<"The mean is the average value of the data\n"
    <<"items. The mean is equal to the total of\n"
    <<"all the data items divided by the number\n"
    <<"of data items ("<<arraySize
    <<"). The mean value for\nthis run is: "
    <<setiosflags(ios::fixed|ios::showpoint)
    <<setprecision(4)<<(float)total/arraySize
    <<"\n\n";
}

void median(int answer[], int size)
{
  cout<<"\n********\n Median\n********\n"
    <<"The unsorted array of responses is";

  printArray(answer, size);
  bubbleSort(answer, size);
  cout<<"\n\nThe sorted array is";
  printArray(answer, size);
  cout<<"\n\nThe median is element "<< size/2
    <<" of\nthe sorted"<<size
    <<"element array.\nFor this run the median is "
    <<answer[size/2]<<"\n\n";
}

void mode(int freq[], int answer[], int size)
{
  int rating, largest = 0, modeValue = 0;

  cout<<"\n********\n Mode\n********\n";

  for(rating = 1; rating <= 9; rating++)
    freq[rating] = 0;
  
  for(int j = 0; j < size; j++)
    ++freq[answer[j]];

  cout<<"Response"<<setw(11)<<"Frequency"
    <<setw(19)<<"Histogram\n\n"<<setw(55)
    <<"1    1    2    2\n"<<setw(56)
    <<"5    0    5    0    5\n\n";

  for(rating = 1; rating <= 9; rating++){
    cout<<setw(8)<<rating<<setw(11)
      <<freq[rating]<<"    ";

    if(freq[rating] > largest){
      largest = freq[rating];
      modeValue = rating;
    }

    for(int h = 1; h <= freq[rating]; h++)
      cout<<'*';
    cout<<'\n';
  }

  cout<<"The mode is the most frequent value.\n"
    <<"For this run the mode is "<<modeValue
    <<"which occured "<<largest<<" times."<<endl;
}

void bubbleSort(int a[], int size)
{
  int hold;
  
  for(int pass = 1; pass < size; pass++)
    for(int j = 0; j < size - 1; j++)

      if(a[j]>a[j+1]){
        hold = a[j];
        a[j] = a[j + 1];
        a[j+1] = hold;
      }
}

void printArray(const int a[], int size)
{
  for(int j= 0; j < size; j++){
    if(j % 20 == 0)
      cout << endl;

    cout<<setw(2)<<a[j];
  }
}

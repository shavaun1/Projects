#include"fig02_52.h"
#include<iostream>

using std::endl; using std::cout;

void printArray(int a[][3])
{
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++)
      cout<<a[i][j]<<' ';

    cout<< endl;
  }
}

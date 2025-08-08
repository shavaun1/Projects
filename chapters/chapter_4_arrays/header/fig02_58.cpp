#include "fig02_58.h"
#include<vector>
#include<iostream>
using std::vector; using std::cout; using std::cin;

void outputVector(const vector<int>& items)
{
  for(const int& item: items)
  {
    cout<<item<<" ";
  }
  cout<<'\n';
}

void inputVector(vector<int>& items)
{
  for(int& item : items)
  {
    cin >> item;
  }
}

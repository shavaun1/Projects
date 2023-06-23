#include"average.h"
#include<iostream>

double average(const int size, int& sum)
{
  using std::cout;
  using std::endl;
  using std::cin;

  int data;
  cout<<"\n Enter "<< size <<" integers: "<<endl;

  for(int i = 0; i < size; ++i)
  {
    cin >> data;
    sum += data;
  }
  return static_cast<double>(sum)/size;
}

double average(const int size, double& sum)
{
  using std::cout;
  using std::cin;
  using std::endl;

  double data;
  cout<<"\n Enter "<< size <<" doubles: "<< endl;

  for(int i = 0; i < size; ++i)
  {
    cin >> data;
    sum += data;
  }
  return sum / size;
}

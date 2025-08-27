#include"fig05_65.h"
#include<iostream>
#include<span>
#include<format>
#include<numeric>
using std:: span; using std::format; using std::cout;

void displayArray(const int items[], size_t size)
{
  for(size_t i{0}; i < size; ++i)
  {
    cout<<format("{}", items[i]);
  }
}

void displaySpan(span<const int> items)
{
  for(const auto& item: items)
  {
    cout<<format("{}",item);
  }
}

void times2(span<int> items)
{
  for(int& item: items)
  {
    item *= 2;
  }
}

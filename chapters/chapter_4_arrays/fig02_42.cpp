//Compute the sum of the elements of the array
#include<iostream>
#include<format>
#include<array>

using std::cout; using std::format; using std::array;


int main()
{
  array items {1,3,5,4,7,2,99,16,45,67,89,45};

  int total{0};

  for(const int& item: items)
  {
    total += item;
  }

  cout<<format("Total of array element value is: {}\n", total);
}

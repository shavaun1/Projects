#include<format>
#include<iostream>
#include"point/fig05_62.h"

using std::cout; using std::format;

int main()
{
  double numbers[20];

  cout<<format("Number of bytes in numbers is {}\n\n",
      sizeof(numbers));

  cout<<format("Number of bytes returned by getSize is {}\n",
      getSize(numbers));
}

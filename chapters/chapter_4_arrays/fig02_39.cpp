//Initialize array s to the even integers from 2 to 20.
#include<iostream>
#include<array>
#include<format>

using std::cout; using std::format; using std::array;

int main()
{
  array  arraySize{1,2,3,4,5};
  

  for(const int&  arraySizes: arraySize)
  {
  
   cout<<format("{}",arraySizes);
  }

  for(int& arraySizes: arraySize)
  {
    arraySizes *= 2;
  }

  cout<<"\narraysizes after modifcation: ";

  for(const int& arraySizes: arraySize)
  {
    cout<<format("{}",arraySizes);
  }

  cout<<"\n\ncalculating a running total of items' values:\n";
  for(int total{0}; const int& arraySizes: arraySize)
  {
    total += arraySizes;
    cout<< format("item:{}; total: {}\n", arraySizes, total);
  }
  return 0;
}

//initializing an array
#include<iostream>
#include<format>
#include<array>

using std::cout; using std::endl; using std::format; using std::array;

int main()
{
  array<int, 5> values; //values is an array of 5 int values 

  for(size_t i{0}; i < values.size(); ++i)
  {
    values[i] = 0;//set element at location i to 0
  }

  cout<< format("{:>7}{:>19}\n","Element", "Value");

  for(size_t i{0}; i < values.size(); ++i)
  {
    cout<<format("{:>7}{:>10}\n", i, values[i]);
  }
    cout<<format("\n{:>7}{:>10}\n", "Element","Value");

    for(size_t i{0}; i < values.size(); ++i)
    {
      cout<<format("{:>7}{:>10}\n", i, values.at(i));
    }

    values.at(10);
  
  return 0;
}

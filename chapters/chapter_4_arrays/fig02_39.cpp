//Initialize array s to the even integers from 2 to 20.
#include<iostream>
#include<array>
#include<format>

using std::cout; using std::format; using std::array;

int main()
{
  array<const int, 10> arraySize{};
  

  for(const int&  arraySize: arraySize)
  {
  
   cout<<format("{}",arraySize);
  }

  cout<<format ("{:>7}{:>13}","Element","Value") ;

  for(const int& arraySize: arraySize)
  {
    cout<<format("{:>7}{:>13}","Element","Value");
  }
  return 0;
}

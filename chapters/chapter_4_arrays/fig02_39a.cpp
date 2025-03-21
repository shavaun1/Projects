//set array values to the even integers from 2 to 10
#include<format>
#include<iostream>
#include<array>

using std::cout; using std::array; using std::format;

int main()
{
  constexpr size_t arraysize{5};
  
  array<int,arraysize> values{};

  for(size_t i{0}; i < values.size(); ++i)
  {
    values.at(i) = 2 + 2 * i;
  }

  for(const int& value: values)
  {
    cout<<format("{} ", value);
  }

  cout<<'\n';
 
}

#include<array>
#include<format>
#include<iostream>
#include<numeric>
#include"header/fig02_56.cpp"

using std::array; using std::format; using std::accumulate; using std::end;
using std::begin; using std::cout;

int main()
{
  constexpr array integers{1,2,3,4,5};

  cout<<format("Product of integers: {}\n", accumulate(begin(integers),end(integers),1,mulztiply));

  cout<<format("Product of integers with a lambda: {}\n", accumulate(
        begin(integers),end(integers),1,[](const auto& x, const auto& y)
        {return x * y;}));
}

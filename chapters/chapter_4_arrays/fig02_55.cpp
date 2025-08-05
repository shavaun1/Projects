#include<array>
#include<format>
#include<iostream>
#include<numeric>

using std::array; using std::accumulate; using std::begin; using std::end;
using std::cout; using std::format;

int main()
{
  constexpr array integers{10,20,30,40};
  cout<<format("Total of elements:{}\n", accumulate(begin(integers),end(integers),0));
}

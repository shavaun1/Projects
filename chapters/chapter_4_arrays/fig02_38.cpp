//Initializing an array with a declartion
#include<iostream>
#include<format>
#include<array>

using std::cout; using std::array; using std::format;

int main()
{
  array<int,10> values{32,27,64,18,95,14,90,70,60,37};

  for(size_t i{0}; i < values.size(); ++i)
  {
    cout<<format("{} ", values.at(i));
  }

  cout<<"\n\n";

  array values2{1.1,2.2,3.3,4.4};

  for(size_t i{0}; i < values2.size(); ++i)
  {
    cout<<format("{} ", values2.at(i));
  }
    

  cout<<"\n";
}


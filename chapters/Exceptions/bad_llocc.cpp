#include<array>
#include<format>
#include<iostream>
#include<memory>
#include<new> //bad_alloc class is defined here

using std::cout; using std::format; using std::make_unique;
using std::array; using std::cerr; using std::bad_alloc;
using std::unique_ptr;

int main()
{
  array<unique_ptr<double[]>, 1000> items{};

  //aim each unique_ptr at a big block of memory
  try
  {
    for(int i{0}; auto& item : items)
    {
      item = make_unique<double[]>(500'000'000);
      cout<<format("items[{}] points to 500,000,000 doubles\n", i++);
    }
  }
  catch(const bad_alloc& memoryAllocationException)
  {
    cerr<<format("Exception occured: {}\n", memoryAllocationException.what());
  }
}

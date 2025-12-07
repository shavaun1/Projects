#include<array>
#include<cstdlib>
#include<format>
#include<iostream>
#include<memory>
#include<new>

using std::cout; using std::array; using std::format;
using std::cerr; using std::exit; using std::unique_ptr;
using std::set_new_handler; using std::make_unique;

//handle memory allocation failure
void customNewHandler()
{
  cerr<<"customNewHandler was called\n";
  exit(EXIT_FAILURE);
}

int main()
{
  array<unique_ptr<double[]>,1000> items{};

  //specify that customNewHandler should be called on
  //memory allocation failure
  set_new_handler(customNewHandler);

  //aim each unique_ptr at a block of memory
  for(int i{0}; auto& items : items)
  {
    items = make_unique<double[]>(500'000'000);
    cout<<format("items[{}] points to 500,000,000 doubles\n", i++);
  }
}

#include"Throw/tryblock.h"
#include<stdexcept>
#include<format>
#include<iostream>

using std::format; using std::runtime_error; using std::cout;

int main()
{
  try
  {
    const ResourceManager resource{7};
  }

  catch(const runtime_error& ex)
  {
    cout<<format("Rethrown exception caught in main: {}\n", ex.what());
  }
}

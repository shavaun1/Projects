#include"tryblock.h"
#include<format>
#include<limits>
#include<stdexcept>
#include<iostream>
using std::format; using std::runtime_error; using std::cout;
//class purposely throws an exception from its constructor

Integer::Integer(int i) : value{i}
{
  cout<<format("Integer constructor: {}\n", value)
    <<"Purposely throwing exception from Integer constructor\n";
  throw runtime_error("Integer constructor failed");
}

ResourceManager::ResourceManager(int i) try : myInteger(i)
{
  {
    cout<<"ResourceManager constructor called\n";
  }

}
    catch(const runtime_error& ex)
    {
      cout<<format("Exception while constructing ResourceManager:",
          ex.what())<<"\nAutomatically rethrowing the exception\n";
    }
  


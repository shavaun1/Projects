#include"unwinding.h"
#include<iostream>
#include<stdexcept>

using std::cout; using std::runtime_error;

//function3 throws runtime error
 void function3()
{
  cout<<"In function 3\n";

  //no try block, stack unwinding occurs, return control to function2
  throw runtime_error{"runtime_error in function3"};
}

//function2 invokes function3
void function2()
{
  cout<<"function3 is called inside function2\n";
  function3(); // stack unwinding occurs, return control to function1
}

//function1 invokes function2
void function1()
{
  cout<<"function2 is called inside function1\n";
  function2(); //stack unwinding occurs, returns control to main
}

#include"Throw/unwinding.h"
#include<iostream>
#include<stdexcept>

using std::cout; using std::runtime_error;

//demonstrate stack unwinding
int main()
{
  //invoke function 1
  try
  {
    cout<<"Function1 is called inside main\n";
    function1(); //all function1 which throws runtime_error 
  }
  catch(const runtime_error& error)//handle runtime_error 
    {
  cout<<"Exception occured: "<<error.what()
  <<"\nException handled in main\n";
  }
}

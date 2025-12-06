#include<iostream>
#include<exception>

using std::cout; using std::exception;

//throw exception and catch it immediately
void throwException()
{
  //throw exception and catch it immediately
  try
  {
    cout<<"Function throwException throws an exception\n";
    throw exception{}; // generate exception 
  }
  catch(const exception&)//handle exception 
  {
    cout<<"Exception handled in Function throwException"
      <<"\n Function throwException rethrows exception";
    throw; //rethrows exception for further processing
  }
  cout<<"This should not print\n";
}

int main()
{
  //call throwException
  try
  {
    cout<<"main invokes Function throwException\n";
    throwException();
    cout<<"This should not print\n";
  }
  catch(const exception&)
  {
    cout<<"\n\nException handled in main\n";
  }
  cout<<"Program control continues after catch in main\n";
}

#include <iostream>
using namespace std;

void first()
{
  int x = 25;
  cout<<"local x in the function first is "<< x << endl;
  x++;
}

void second()
{
  static int x = 1;
  cout<<"This function is called "<< x << " times "<< endl;
  ++x;
}

int main()
{
  first();
  second();
  cout<<"Calling functions once more "<<endl;
  first();
  second();
  return 0;
}

//Reference must be initialized
#include<iostream>

using std::cout; using std::endl;

int main()
{
  int x = 3, &y = x;

  cout<<"x = "<< endl<<"y = "<< y << endl;
  y = 7;
  cout <<" x = "<< x << endl <<" y = "<< y << endl;

  return 0;
}

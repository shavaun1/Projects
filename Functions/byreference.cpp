#include <iostream>
using namespace std;

void doubleIt(int &);

int main()
{
  int x = 10;
  cout<<"Before calling the function doubleIt, x is "<< x << endl;
  doubleIt(x);
  cout<<"After calling the function doubleIt, x is "<< x << endl;

  return 0;

}

void doubleIt(int &y)
{
  y = 2 * y;
  cout <<"After double in the function, y is "<< y << endl;
}

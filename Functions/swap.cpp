#include <iostream>
using namespace std;

void swap(int, int);

int main()
{
  int a, b, s;

  cout <<"Enter two numbers you want to be swapped: ";
  cin >> a >> b;
  swap(a, b);
  

  return 0;
}

void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;

cout << "The swapped numbers are: " << x <<" " << y << endl;

}

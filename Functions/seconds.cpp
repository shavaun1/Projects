#include <iostream>
#include"packages/seconds.h"


int main()
{
  using std::endl;
  using std::cout;
  using std::cin;

  int h, m, s;

  cout<<"Enter hours, minutes, seconds: ";
  cin >> h >> m >> s;
  int sec = clock(h,m,s);
  cout << "Total number of seconds: "<< sec << endl;
  return 0;
}


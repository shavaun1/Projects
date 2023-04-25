#include <iostream>
using namespace std;

int clock(int,int,int);

int main()
{
  int h, m, s;

  cout<<"Enter hours, minutes, seconds: ";
  cin >> h >> m >> s;
  int sec = clock(h,m,s);
  cout << "Total number of seconds: "<< sec << endl;
  return 0;
}

int clock(int x, int y, int z)
{
  int seconds = (x * 3600) + (y * 60) + z;

  return seconds;
}

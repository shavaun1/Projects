#include"recursive.h"
#include<iostream>

void getput()
{
  using std::cout;
  using std::cin;
  using std::endl;
  char c;
  if(cin.get(c) && c!= '\n')
    getput();
      cout.put(c);
}

#include "packs/date3.h"
#include<iostream>

using std::endl;
using std::cout;

int main()
{
  const int NUMDATES = 5;
  Datezz thedate[NUMDATES];
  for(int i = 0; i <= NUMDATES; i++)
  {
    thedate[i].showDatezz();
    cout<<endl;
  }
  return 0;
}

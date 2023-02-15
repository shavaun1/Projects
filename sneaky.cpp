#include <cstddef>
#include <cstddef>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<string>
#include<fstream>
#include<cctype>
#include<climits>
#include <iostream>
#include <type_traits>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>



//Bank account..


using namespace std;

typedef int* IntPointer;

void sneaky(IntPointer temp);

int main()
{
  IntPointer p;

  p = new int;
  *p = 77;
  cout<<"Before call to function *p == "
    <<*p << endl;
  sneaky(p);
  cout<<"After call to function *p == "
    <<*p << endl;

  return 0;
}

void sneaky(IntPointer temp)
{
  *temp = 99;
  cout << "Inside function call *temp == "
    << temp << endl;
}

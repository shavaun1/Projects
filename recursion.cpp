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



using namespace std;

void writeVertical(int n);

int main()
{
  cout<<"writeVertical(3): "<<endl;
  writeVertical(3);

  cout<<"writeVertical(12): "<<endl;
  writeVertical(1234);

  cout<<"writeVertical(123): "<<endl;
  writeVertical(12345);

  return 0;
}

void writeVertical(int n)
{
  if(n<10)
  {
    cout<<n << endl;
  }
  else // n is two or more digits long:
  {
    writeVertical(n/10);
    cout<<(n % 10)<< endl;
  }
}

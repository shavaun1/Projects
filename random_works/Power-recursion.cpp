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

int power(int x, int n);

int main()
{
  int b, e;
  cout<<"Enter the base & exponent: ";
  cin>> b >> e;

  for(int n = 0; n < e ; n++)
    cout<< b <<" to the power "<< n
      <<" is "<<power(b,n)<< endl;

  return 0;
}

int power(int x, int n)
{
  if(n < 0)
  {
    cout<<"Illegal argument to power.\n";
    exit(1);
  }

  if(n > 0)
    return(power(x,n-1) *x);
  else
    return(1);
}

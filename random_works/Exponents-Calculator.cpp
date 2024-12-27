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

void newLine();

int main()
{
  
  using namespace std;
  
  double a;
  int b, c = 1 ;
  char e;
  
  do
  {
  cout<<"Enter the base and exponent: ";
  cin>> a >> b;

  for(int i = 0; i < b; i++)
  {
   c *= a;
    
  }

  cout << a << " to the power of "<< b <<" is = "<<c << "\n";
  cout<< endl;

  
  
  
  cout<<"Do you want to continue? (Y/N) ";
  cin >> e;
 
  }
  
  while(e == 'y' || e == 'Y');


  return 0;
}






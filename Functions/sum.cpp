#include <iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include"packages/sum.h"


int main()
{
  using std::endl;
  using std::cout;
  cout<<" **** Computing sums ***\n"
    << endl;

  srand((unsigned int) time(NULL));
  long res, a = rand()/10, b = rand() / 10, 
       c = rand()/10, d = rand()/10;

  res = sums(a,b);
  cout<<a <<" + "<< b <<" = "<< res << endl;

  res = sums(a,b,c);
  cout<< a <<" + "<< b << " + "<< c << " + "<< d
    <<" = "<< res << endl;

  res = sums(a,b,c,d);
  cout<<a << " + "<< b <<" + "<< c << " + "<< d
    <<" = "<< res << endl;

  return 0;
}


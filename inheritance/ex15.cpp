#include"packs/date5.h"
#include<iostream>
using std::cout;
using std::endl;

int main()
{
  DateR a(4,1,2011), b(12,18,2012);

  DateR c(a);
  DateR d(b);

  cout<<"\nThe date stored in a is ";
  a.showDate();
  cout<<"\nThe date stored in b is ";
  b.showDate();
  cout<<"\nThe date stored in c is ";
  c.showDate();
  cout<<"\nThe date stored in d is ";
  d.showDate();

  return 0;
}

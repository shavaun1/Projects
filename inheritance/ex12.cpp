#include"packs/complex.h"
#include<iostream>
using std::cout;
using std::endl;

int main()
{
  Complex a(3.2,5.6) , b(1.1, -8.4);
  double re, im;

  cout<<"\nThe first complex number is ";
  a.display();
  cout<<"\n\nThe sum of these tow numbers is ";
  b.display();

  re = addreal(a,b);
  im = addimag(a,b);
  Complex c(re,im);
  cout<<"\n\nThe sum of these two complex numbers is ";
  c.display();

  return 0;
}

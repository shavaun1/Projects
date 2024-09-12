#include"complex.h"
#include<iostream>
#include<cmath>
using std::cout;
using std::endl;

Complex::Complex(double rl, double im)
{
  real = rl;
  imag = im;
}

void Complex::display()
{
  char sign = '+';
  if(imag <0) sign ='-';
  cout<<real<<sign<<abs(imag)<<'i';
  return;
}

double addreal(Complex&a,Complex&b)
{
  return(a.real + b.real);
}

double addimag(Complex&a, Complex&b)
{
  return(a.imag + b.imag);
}


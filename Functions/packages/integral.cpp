#include"integral.h"

double integral(double x, double a, double b)
{
  int n = 100;
  double F, h, Sum;
  h =(b-a)/n;
  Sum= h * (b*b + a*a)/2;

  for(int k =1; k<n; k++)
  {
    x =  a + k*h;
    Sum = Sum + h*F;
  }
  return Sum;
}

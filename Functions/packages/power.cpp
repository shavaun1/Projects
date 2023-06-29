#include"power.h"

double power(double x, int n)
{
  double result{1.0};
  if(n >= 0)
    for(int i{}; i < n; ++i)
      result *= x;
  else
    for(int i{}; i <-n; ++i)
      result /= x;
  return result;
}

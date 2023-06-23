#include "another_overload.h"

double ave(double n1, double n2)
{
  return((n1 + n2)/2.0);
}

double ave(double n1, double n2, double n3)
{
  return((n1 + n2 + n3)/3.0);
}

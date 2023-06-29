#include"round.h"
#include<cmath>
int rounded(double number)
{
  return static_cast<int>(floor(number + 0.5));
}

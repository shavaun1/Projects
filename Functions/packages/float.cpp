#include"invest.h"

float compound(float principal, float rate, int time)
{
  for(int count = 0; count < time; count++)
    principal *= (1+rate/100);
  return principal;
}

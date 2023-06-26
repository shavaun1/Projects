#include"order1.h"

void order(int* p, int* q)
{
  int temp;

  if(*p > *q)
  {
    temp = *p;
    *p = *q;
    *q = temp;
  }
}

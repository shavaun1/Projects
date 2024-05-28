#include"sample10.h"

long factorial(long a)
{
  if(a>1)
    return(a*factorial(a-1));
  else
    return(1);
}


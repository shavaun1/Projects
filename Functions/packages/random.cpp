#include "random.h"

double totalCost1(int numberParameter, double priceParameter)
{
  const double TAXTRATE = 0.5;
  double subtotal;

  subtotal = priceParameter * numberParameter;
  return(subtotal + subtotal * TAXTRATE);
}

#include"sample12.h"

double totalCost(int numberParamter, double priceParameter)
{
  const double TAXRATE = 0.05;
  double subtotal;

  subtotal = priceParameter * numberParamter;
  return(subtotal + subtotal*TAXRATE);
}

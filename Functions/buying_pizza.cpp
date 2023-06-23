#include<iostream>
#include"packages/buying_pizza.h"

//retrun the price per square inch of a pizza
//precondition: The diameter parameter is the diameter of the pizza
//in inches. The parameter is the price of the pizza.

int main()
{
  int diameterSmall, diameterLarge;
  double priceSmall, priceLarge;

  getData(diameterSmall, priceSmall, diameterLarge, priceLarge);
  giveResults(diameterSmall,priceSmall,diameterLarge,priceLarge);

  return 0;
}



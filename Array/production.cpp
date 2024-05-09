#include<iostream>
#include "header/production.h"


int main()
{
  using std::cout;

  const int NUMBER_OF_PLANTS = 4;

  int production[NUMBER_OF_PLANTS];

  cout<<"This program displays a graph showing\n"
    <<"production for each plant in the company.\n";

  inputData(production,NUMBER_OF_PLANTS);
  scale(production, NUMBER_OF_PLANTS);
  graph(production, NUMBER_OF_PLANTS);
  return 0;
}


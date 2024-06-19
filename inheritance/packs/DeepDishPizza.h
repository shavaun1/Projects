#ifndef DEEPDISHPIZZA_H
#define DEEPDISHPIZZA_H
#include"FrozenPizza.h"
#include"FrozenFood.h"
#include<iostream>

class DeepDishPizza: public FrozenPizza
{
  private:
    int height;
  public:
    DeepDishPizza(int APrice, int AWeight, int ADiameter, int AHeight);
    void DumpDestiny();
};

FrozenFood::FrozenFood(int APrice, int AWeight)
{
  price = APrice;
  weight = AWeight;
}

int FrozenFood::getprice()
{
  return price;
}

int FrozenFood::getweight()
{
  return weight;
}

FrozenPizza::FrozenPizza(int APrice, int AWeight, int ADiameter): FrozenFood(APrice, AWeight)
{
 Diameter = ADiameter;
}

void DeepDishPizza::DumpDestiny()
{
  using std::cout;
  using std::endl;
  cout<<"\tDensity: ";
  cout<<weight*12*12*12*4/(weight*Diameter*22*16);
  cout<<" pounds per cubic foot" << endl;
}

DeepDishPizza::DeepDishPizza(int APrice, int AWeight, int ADiameter, int AHeight):
  FrozenPizza(APrice, AWeight,ADiameter)
{
  height = AHeight;
}

void FrozenPizza::DumpInfo()
{
  using std::cout;
  using std::endl;
  cout<<"\tFrozen pizza info:"<<endl;
  cout<<"\t\tWeight: "<< weight <<" ounces"<<endl;
  cout<<"\t\tDiameter: "<<Diameter <<" inches"<<endl;
}

#endif 

#ifndef FrozenPizza_h
#define FrozenPizza_h
#include"FrozenFood.h"

class FrozenPizza : public FrozenFood
{
  protected:
    int Diameter;
  public:
    FrozenPizza(int Aprice, int AWeight, int ADiameter);
    void DumpInfo();
};

#endif

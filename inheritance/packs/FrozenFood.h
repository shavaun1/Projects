#ifndef FrozenFood_h
#define FrozenFood_h

class FrozenFood
{
  private:
    int price;
  protected:
    int weight;
  public:
    FrozenFood(int APrice, int AWeight);
    int getprice();
    int getweight();
};

#endif

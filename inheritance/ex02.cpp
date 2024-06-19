#include"packs/DeepDishPizza.h"
#include"packs/FrozenPizza.h"
#include<iostream>

int main()
{
  using std::cout;
  using std::endl;

  cout<<"Thin crust pepperoni"<< endl;
  FrozenPizza pepperoni(450,12,14);
  pepperoni.DumpInfo();
  cout<<"\tPrice: "<<pepperoni.getprice()<<" cents"<<endl;
  cout<<"Deep dish extra-cheese"<<endl;
  DeepDishPizza extracheese(650,21592,14,3);
  extracheese.DumpInfo();
  extracheese.DumpDestiny();
  cout<<"\tPrice: "<<extracheese.getprice()<<" cents"<<endl;
  return 0;
}

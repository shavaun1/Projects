#include<iostream>
#include"packs/Box.h"
#include"packs/Carton.h"

int main()
{
  using std::endl;
  using std::cout;
  //Create a Box object and two Carton objects
  Box box{40.0, 30.0, 20.0};
  Carton carton;
  Carton chocolateCarton{"Solid bleached paperboard"};
  //Check them out - size first of all
  cout <<"box volume is "<< box.volume() <<endl;
  cout<<"carton occupies "<< sizeof carton <<" bytes"<<endl;
  cout<<"candyCarton occupies "<< sizeof chocolateCarton << " bytes"<<endl;

  //Now volumes...
  cout<<"box volume is "<<box.volume()<< endl;
  cout<<"carton volume is "<<carton.volume()<<std::endl;
  cout<<"chocolateCarton volume is "<<chocolateCarton.volume()<< endl;

  cout<<"chocolateCarton length is "<<chocolateCarton.getLength()<<endl;
}

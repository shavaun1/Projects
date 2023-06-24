#include"defaults.h"
#include<iostream>

void showVolume(int length, int width, int height)
{
  using std::cout;
  using std::endl;

  cout<<"Volume of a box with \n"
    <<"Length = "<< length <<" ,Width = "<< width << endl
    <<"and Heigth = "<< height
    <<" is "<< length*width*height<<endl;

}

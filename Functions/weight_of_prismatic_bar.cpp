#include<iostream>
#include"packages/weight_of_prismatic_bar.h"

int main()
{
  using std::cout;
  using std::endl;
  int A = 2, B = 3, C = 1;
  float D = 7.5;

  cout<<"Length ="<<A<<", Width = "<<B<<", Height = "<<C<<", Density = "<<D<<endl;
  cout<<"Weight of bar = "<<Weight(A,B,C,D)<<"\n";
  
}

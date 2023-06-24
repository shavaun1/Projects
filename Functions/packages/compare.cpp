#include"comparing.h"
#include<iostream>

void DoStuff(int par1Value, int& par2Ref)
{
  using std::cout;
  using std::endl;

  par1Value = 111;
  cout<<"Par1value in function call "
    <<par1Value << endl;
  par2Ref = 222;
  cout<<"par2Ref in function "
    <<par2Ref << endl;
}




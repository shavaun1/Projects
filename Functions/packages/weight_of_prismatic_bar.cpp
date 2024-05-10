#include"weight_of_prismatic_bar.h"
#include<iostream>

double Weight(int L, int W, int H, float Rho)
{
  return L*W*H*Rho;
}

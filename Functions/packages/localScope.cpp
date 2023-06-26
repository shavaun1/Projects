#include"localScope.h"

double estimateOfTotal(int minPeas, int maxPeas, int PodCount)
{
  double averagePea;

  averagePea = (maxPeas + minPeas)/2.0;
  return(PodCount * averagePea);
}

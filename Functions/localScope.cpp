#include <iostream>
#include"packages/localScope.h"

//returns an estimate of the total number of peas harvested.
//the formal parameter podcount is the number of peaas harvested.
//the formal parameter minPeas and maxPeas are the minimun
//and maximum number of peas in a pod.

int main()
{

  using std::cout;
  using std::cin;
  using std::endl;

  int maxCount, minCount, PodCount;
  double averagePea, yield;

  cout <<"ENter minimum and maximum number of peas in a pod: ";
  cin >> minCount >> maxCount;
  cout<<"Enter the number of pods: ";
  cin >> PodCount;
  cout << "Enter the weight of an average pea(in ounces): ";
  cin >> averagePea;

  yield = 
    estimateOfTotal(minCount, minCount,PodCount) * averagePea;

  cout.setf(std::ios::fixed);
  cout.setf(std::ios::showpoint);
  cout.precision(3);
  cout << "Min number of peas per pod = "<< minCount << endl
    <<"Max number of peas per pod = "<<maxCount << endl
    <<"Pod count = "<< PodCount << endl
    <<"Average pea weight = "
    <<averagePea <<" ounces"<<endl
    <<"Estimated average yield = "<< yield <<" ounces"
    <<endl;

  return 0;
}



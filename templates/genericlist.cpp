#include<iostream>
#include "genericlist.h"
#include "genericlister.h"
using namespace std;
using namespace listasvitch;

int main()
{
  GenericList<int> firstList(2);
  firstList.add(1);
  firstList.add(2);
  
  cout<< "firstList = \n"
    << firstList;
  GenericList<char> secondList(0);
  secondList.add('A');
  secondList.add('B');
  secondList.add('C');
  cout << "secondList = \n"
    << secondList;

  return 0;
}

#include "date3.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;
using std::setfill;

Datezz::Datezz()
{
  cout<<"*** A date object is being initialized\n";
  month = 1;
  day = 1;
  year = 2015;
}

Datezz::~Datezz()
{
  cout<<"*** A date object is going out of existence**\n";
}

void Datezz::showDatezz()
{
  cout<<"     The date is "<<setfill('0')
    <<setw(2)<<month<<'/'
    <<setw(2)<<day<<'/'
    <<setw(2)<<year%100;
  return;
}



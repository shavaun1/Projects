#include"date2.h"
#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;

Datess::Datess(int mm, int dd, int yyyy)
{
  month = mm;
  day = dd;
  year = yyyy;
}

Datess::Datess(long yyyymmdd)
{
  year = int(yyyymmdd / 100.0);
  month = int(yyyymmdd - year * 10000.0);
  day = int(yyyymmdd - year* 10000.0 - month * 100.0);
}

void Datess::showDatess()
{
  cout<<"The date is ";
  cout<< setfill('0')
    <<setw(2)<<month<<'/'
    <<setw(2)<<day<<'/'
    <<setw(2)<<year % 100;
  cout<<endl;
  return;
}

#include"date5.h"
#include<iostream>
#include<iomanip>
using std::cout;
using std::setfill;
using std::setw;

DateR::DateR(int mm, int dd, int yyyy)
{
  month = mm;
  day = dd;
  year = yyyy;
}

DateR::DateR(const DateR& oldDate)
{
  month = oldDate.month;
  day = oldDate.day;
  year = oldDate.year;
}

void DateR::showDate()
{
  cout<<setfill('o')
    <<setw(2)<<month<<'/'
    <<setw(2)<<day<<'/'
    <<setw(2)<<year%100;
  return;
}


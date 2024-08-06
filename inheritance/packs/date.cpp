// class implementation of date.h

#include"date.h"
#include<iostream>
#include<iomanip>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

Date::Date(int mm, int dd, int yyyy)
{
  month = mm;
  day = dd;
  year = yyyy;
}

void Date::setDate(int mm, int dd, int yyyy)
{
  month = mm; day =dd; year = yyyy;
  return;
}

void Date::showDate()
{
  cout<<"The date is ";
  cout<<setfill('0')
    <<setw(2)<<month<<'/'
    <<setw(2)<<day<<'/'
    <<setw(2)<<year%100; //extract the last 2 year digits
  cout<<endl;
  return;
}


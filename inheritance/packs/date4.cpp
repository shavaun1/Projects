#include"date4.h"
#include<iostream>
#include<iomanip>
using std::cout;
using std::setfill;
using std::setw;

DateU::DateU(int mm, int dd, int yyyy)
{
  month = mm;
  day =dd;
  year = yyyy;
}

DateU DateU::operator+(int days)
{
  DateU temp;
  temp.day = day + days;
  temp.month = month;
  temp.year = year;

  while(temp.day > 30)
  {
    temp.month ++;
    temp.day -= 30;
  }

  while(temp.month > 12)
  {
    temp.year++;
    temp.month -= 12;
  }

  return temp;
}

void DateU::showDate()
{
  cout<<setfill('0')
    <<setw(2)<<month<<'/'
    <<setw(2)<<day<<'/'
    <<setw(2)<<year%100;
  return;
}







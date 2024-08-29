#include"date1.h"
#include<iostream>

using std::endl;
using std::cout;

Dates::Dates(int mm, int dd, int yyyy )
{
  month = mm;
  day = dd;
  year = yyyy;
  cout<<"created a new date object with values "
    <<month<<","<<day<<","<<year<<endl;
}

#include"datep.h"

Datep::Datep(int mm, int dd, int yyyy)
{
  month = mm;
  day = dd;
  year = yyyy;
}

bool Datep::operator==(Datep&date2)
{
  if(day == date2.day && month == date2.month && year == date2.year)
    return true;
  else
    return false;
}

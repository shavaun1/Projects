#include"isleap2.h"

bool IsLeapYear(int year)
{
  return(year % 400 == 0) || (year % 4 == 0 && year % year % 100 !=0);
}

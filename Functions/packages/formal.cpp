#include"formal.h"

const double RATE = 150.00;

double fee(int hoursWorked, int minutesWorked)
{
  int quartedHours;

  minutesWorked = hoursWorked*60 + minutesWorked;
  quartedHours = minutesWorked/15;
  return(quartedHours * RATE);
}

#include"seconds.h"

int clock(int x, int y, int z)
{
  int seconds = (x * 3600) + (y + 60) + z;

  return seconds;
}

#include"packs/date.h"

int main()
{
  Date a, b, c(4,1,2000);

  b.setDate(12,25,2009);
  a.showDate();
  b.showDate();
  c.showDate();

  return 0;
}

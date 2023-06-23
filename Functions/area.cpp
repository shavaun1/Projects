#include <iostream>
#include <iomanip>
#include "packages/area.h"


int main()
{

  using std::cout;
  using std::cin;
  using std::endl;
  using std::fixed;
  using std::setw;
  using std::setprecision;
  double x = 3., y = 7.2, res;

  res = area(x, y+1);

  cout<<fixed << setprecision(2);
  cout<<"\n The area of a rectangle "
    <<"\n with width "<<setw(5) << x
    <<"\n and length "<<setw(5) << y+1
    <<"\n is         "<<setw(5) << res
    <<endl;
  return 0;

}



 



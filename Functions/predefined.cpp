#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  const double COST_PER_SQ_FT = 10.50;
  double budget, area, lengthSide;

  cout<<"Enter the amount budgeted for your doghouse $";
  cin >> budget;

  area = budget / COST_PER_SQ_FT;
  lengthSide = sqrt(area);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout<<"For a pric of $"<< budget << endl
    <<"I can build you a luxurious sqaure doghouse\n"
    <<"that is "<<lengthSide
    <<"feet on each side.\n";

  return 0;
}

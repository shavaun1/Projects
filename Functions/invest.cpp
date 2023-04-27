#include <iostream>
#include <iomanip>
using namespace std;

float compound(float principal, float rate, int time);

int main()
{
  int principal, time;
  float rate;

  cout<<"ENter principal: ";
  cin >> principal;
  cout << "\nEnter rate of interest (as a percentage): ";
  cin >> rate;
  cout <<"\n Enter time (in years): ";
  cin >> time;
  cout <<"\n\nFinal value : ";
  cout<< setiosflags(ios::fixed)<< setprecision(2);
  cout<< compound(principal,rate,time);

  return 0;
}

float compound(float principal, float rate, int time)
{
  for(int count = 0; count < time; count++)
    principal*= (1+rate/100);
  return principal;
}

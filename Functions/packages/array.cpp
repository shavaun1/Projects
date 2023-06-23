#include"array.h"

int sum(const double a[], const int n)
{
  int s = 0;
  for(int i = 0; i < n; ++i)
    s += a[i];
  return static_cast<int>(s);
}

double average(const double a[], const int n)
{
  double s = 0.0;

  for(int i = 0; i < n; ++i)
    s +=a[i];
  return s/n;
}

double minimum(const double a[], const int n)
{
  double min = a[0];

  for(int i = 1; i < n; ++i)
    if(min > a[i])
      min = a[i];
  return min;
}

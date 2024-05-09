#include "production.h"
#include <iostream>
#include <cmath>

void inputData(int a[], int lastPlantNumber)
{
  using std::endl;
  using std::cout;

  for(int plantnumber = 1; plantnumber <= lastPlantNumber; plantnumber++)
  {
  cout<<endl
    <<"Enter production data for plant number "
    <<plantnumber << endl;
  getTotal(a[plantnumber-1]);
  }
}

void getTotal(int& sum)
{
  using std::cout;
  using std::cin;
  using std::endl;

  cout <<"Enter number of units produced by each department.\n"
    <<"Append a negative number to the end of the list.\n";

  sum = 0;
  int next;
  cin >> next;
  while(next >= 0)
  {
    sum = sum + next;
    cin >> next;
  }
  cout <<"Total = "<< sum << endl;
}

void scale(int a[], int size)
{
  for(int index = 0; index < size; index++)
    a[index] = round(a[index]/1000.0);
}

int rounded(double number)
{
  return static_cast<int>(floor(number + 0.5));
}

void graph(const int asteriskCount[], int lastPlantNumber)
{
  using std::cout;
  using std::endl;

  cout<<"\nUnits produced in thousands of units: \n\n";
  for(int plantnumber = 1; plantnumber <= lastPlantNumber; plantnumber++)
  {
    cout<<"Plant #"<<plantnumber <<" ";
    printAsterisks(asteriskCount[plantnumber-1]);
    cout<<endl;
  }
}

void printAsterisks(int n)
{
  using std::cout;

  for(int count = 1; count <= n; count++)
    cout<<"*";
}

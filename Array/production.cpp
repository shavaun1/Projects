#include<iostream>
#include<cmath>
using namespace std;

const int NUMBER_OF_PLANTS = 4;

void inputData(int a[], int lastPlantNumber);
//Precondition: lastPlantNumber is the declared size of the array a.
//Postcondition: for plantnumber = 1 through lastPlantNumber:
//a[plantnumber-1] equals the total production for plant number
//plantnumber.

void scale(int a[], int size);
//Precondition: a[0] through a[size-1] each has a nonnegative value.
//Postcondition: a[i] has been changed to the number of 1000s (rounded to 
//an integer) that were originally in a[i], for all i such that 0 <= i
//<= size-1.

void graph(const int asteriskCount[], int lastPlantNumber);
//Precondition: a[0] through a[lastPlantNumber-1] have nonnegative values.
//Postcondition: A bar graph has been dispalyed saying that plant
//number N has produced a[N-1] 1000s of units, for each N such that
//1 <= N <= lastPlantNumber

void getTotal(int& sum);
//Read nonnegative integers from the keyboard and 
//places their total in sum.

int rounded(double number);
//Precondition: number >= 0
//Returns number rounded to the nearest integer.

void printAsterisks(int n);
//Print n asterisks to the screen.

int main()
{
  int production[NUMBER_OF_PLANTS];

  cout<<"This program displays a graph showing\n"
    <<"production for each plant in the company.\n";

  inputData(production,NUMBER_OF_PLANTS);
  scale(production, NUMBER_OF_PLANTS);
  graph(production, NUMBER_OF_PLANTS);
  return 0;
}

void inputData(int a[], int lastPlantNumber)
{
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
  for(int count = 1; count <= n; count++)
    cout<<"*";
}

#include"partially_filled.h"
#include <iostream>

void fillzArray(int a[], int size, int& numberUsed)
{
  using std::cout;
  using std::cin;

  cout<<"Enter up to "<<size<< " nonnegative whole numbers.\n"
    <<"Mark the end of the list with a nonnegative number.\n";
    int next, index = 0;
  cin >> next ;
  while((next >= 0)&&(index < size))
  {
    a[index] = next;
    index++;
    cin >> next;
  }
  numberUsed = index;
}

double computeAVerage(const int a[], int numberUsed)
{

  using std::cout;

  double total = 0;
  for(int index = 0; index < numberUsed; index++)
    total = total + a[index];
  if(numberUsed > 0)
  {
    return(total/numberUsed);
  }
  else
  {
    cout<<"ERROR: number of elements is 0 in computeAVerage.\n"
      <<"computeAVerage return 0.\n";
    return 0;
  }
}

void showDifference(const int a[], int numberUsed)
{
  using std::cout;
  using std::endl;

  double average = computeAVerage(a,numberUsed);
  cout<<"Avergae of the "<<numberUsed
    <<" score = "<< average << endl
    <<"The scores are:\n";
  for(int index = 0; index < numberUsed; index++)
    cout<<a[index] <<" differes from average by "
      <<(a[index] - average) << endl;
}

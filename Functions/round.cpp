#include<iostream>
#include"packages/round.h"

//assuming number >= 0;
//returns number rounded to the nearest integer.

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;
  double doubleValue;
  char ans;

  do
  {
    cout<<"Enter a double value: ";
    cin >> doubleValue;
    cout<<"Rounded that number is "<< rounded(doubleValue) <<
      endl;
    cout<<"Again(y/n): ";
    cin >> ans;
  }while(ans == 'y' || ans == 'Y');
  cout<<"End of testing.\n";

  return 0;
}


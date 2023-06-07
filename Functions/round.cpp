#include<iostream>
#include<cmath>
using namespace std;

int rounded(double number);
//assuming number >= 0;
//returns number rounded to the nearest integer.

int main()
{
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

int rounded(double number)
{
  return static_cast<int>(floor(number + 0.5));
}

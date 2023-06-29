#include"reference.h"
#include<iostream>

void getNumbers(int& input1, int& input2)
{
  using std::cout;
  using std::cin;
  
  cout<<"Enter two integers: ";
  cin>> input1
    >>input2;
}

void swapValue(int& variable1, int& variable2)
{
  int temp;
  temp = variable1;
  variable1 = variable2;
  variable2 = temp;
}

void showResults(int output1, int output2)
{
  using std::cout;
  using std::endl;
  
  cout<<"In reverse order the numbers are: "
    << output1<<" "<<output2<<endl;
}

#include<iostream>
using namespace std;

void getNUmbers(int& input1, int& input2);
//read two integers from the keyboard

void swapValue(int& variable1, int& variable2);
//interchnages the value of variable1 and variable2
//

void showResults(int output1, int output2);
//shows the value of output1 and output2, in that order.

int main()
{
  int firstNum, secondNum;
   
  getNUmbers(firstNum, secondNum);
  swapValue(firstNum, secondNum);
  showResults(firstNum,secondNum);
  return 0;

}

void getNUmbers(int& input1, int& input2)
{
  cout<<"ENter two integers: ";
  cin >> input1
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
  cout<<"In reverse order the numbers are: "
    <<output1<<" "<<output2<< endl;
}

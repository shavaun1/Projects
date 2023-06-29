#include<iostream>
#include"packages/reference.h"
//read two integers from the keyboard
//interchnages the value of variable1 and variable2
//
//shows the value of output1 and output2, in that order.

int main()
{
  int firstNum, secondNum;
   
  getNumbers(firstNum, secondNum);
  swapValue(firstNum, secondNum);
  showResults(firstNum,secondNum);
  return 0;

}



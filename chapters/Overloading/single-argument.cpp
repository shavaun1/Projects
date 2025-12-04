#include<iostream>
#include"point/MyArray.h"

using std::cout;

void outputArray(const MyArray&); //prototype

int main()
{
  MyArray ints1{7};//7-element MyArray
  outputArray(ints1);//outputArray MyArray ints1
  outputArray(3);
  outputArray((3)); //convert 3 to a MyArray and output the contents
}

//print MyArray contents
void outputArray(const MyArray& arrayToOutput)
{
 cout<<"THe MyArray received has "<<arrayToOutput.size()
   <<"elements. The contents are: "<<arrayToOutput<<"\n";
}

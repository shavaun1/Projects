#include<format>
#include<iostream>
#include<stdexcept>
#include<utility> //for std::move
#include"point/MyArray.h"
using std::format; using std::cout; using std::invalid_argument; using std::move; using std::cin;

//function to return a MyArray by value
MyArray getArrayByValue()
{
    MyArray localInts{10,20,30};//create three-element MyArray;
    return localInts; 
  
}

int main()
{
  MyArray ints1(7); //7-element MyArray; note () rather than {}
  MyArray ints2(10);

  cout<<format("\nints1 size: {}\ncontents: ", ints1.size())
    <<ints1;

  //print ints2 size and contents
  cout<<format("\nints2 size: {}\ncontents: ", ints2.size())
    <<ints2; //uses overloaded <<

  //input and print ints1 and ints2
  cout<<"\n\nEnter 17 integers; ";
  cin >> ints1 >> ints2;

  cout<<"\nints1: "<<ints1 <<"\nints2: "<<ints2;

  //use overloaded inequality (!=) operator
  cout<<"\n\nEvaluating: ints1 != ints2\n";

  if(ints1 != ints2)
  {
    cout<<"ints1 and ints2 are not equal\n\n";
  }
}

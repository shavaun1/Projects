#include<format>
#include<iostream>
#include<stdexcept>
#include<utility> //for std::move
#include"point/MyArray.h"
using std::format; using std::cout; using std::invalid_argument; using std::move; using std::cin;
using std::out_of_range;

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

  //create MyArray ints3 by copying ints1
  MyArray ints3{ints1}; // invokes copy constructor

  //print ints3 size and constents
  cout<<format("\nints3 size: {}\ncontents: ", ints3.size())
    <<int3; 

  //use overloaded copy assignment (=) operator
  cout<<"\n\nAssigning ints2 to ints1:\n";

  if(ints1 == ints2)
  {
    cout<<"ints1 and ints2 are equal\n\n";
  }

  //use overloaded subscript operator to create an rvalue
  cout<<format("ints1[5] is {}\n\n", ints1[5]);

  //uses overloaded subscript operator to create an lvalue
  cout<<"Assigning 1000 to ints1[5]\n";
  ints1[5] = 1000;
  cout<<"ints1: "<<ints1;

  //attempt to use out-of-range subscript
  try
  {
    cout<<"\n\nAttempt to assign 1000 to ints1[15]\n";
    ints1[15] = 1000; //error: subscript out of range;
  }
  catch(const out_of_range& ex)
  {
    cout<<format("An exception occured: {}\n", ex.what());
  }

}

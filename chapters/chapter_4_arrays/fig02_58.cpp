#include "header/fig02_58.cpp"
#include<iostream>
#include<vector>
#include<stdexcept>

using std::vector; using std::cout; using std::out_of_range; using std::cerr;

int main()
{
  vector<int> integers1(7);
  vector<int>integers2(10);

  cout<<"Size of vector inetgers1 is "<< integers1.size()
    <<"\nvector after initialization:";
 outputVector(integers1);
  
  cout<<"\nSize of vector integers2 is "<<integers2.size()
    <<"\nnvector after initialization:";
outputVector(integers2);

cout<<"\nEnter 17 inetgers: \n";
inputVector(integers1);
inputVector(integers2);

cout<<"\nAfter input, the vectors contain:\n"
  <<"integers1";
outputVector(integers1);
cout<<"integers2:";
outputVector(integers2);

cout<<"\nEvaluating: integers1 != integers2\n";

if(integers1 != integers2)
{
  cout<<"integers1 and integers2 are not equal\n";
}

vector integers3{integers1};

cout<<"\nSize of vector integers3 is "<<integers3.size()
<<"\nvector after initialization: ";
outputVector(integers3);

cout<<"\nAssigning integers2 to integers1:\n";
integers1 = integers2;

cout<<"integers1: ";
outputVector(integers1);
cout<<"integers2: ";
outputVector(integers2);

cout<<"\nEvaluating: integers1 == integers2";

if(integers1 == integers2)
{
  cout<<"integers1 and integers2 are equal\n";
}

cout<<"\nintegers1.at(5) is "<<integers1.at(5);

cout<<"\n\nAssigning 1000 to integers1.at(5)\n";
integers1.at(5) = 1000;
cout<<"integers1: ";
outputVector(integers1);

try
{
  cout<<"\nAttempt to display integers1.at(15)\n";
  cout<<integers1.at(15) <<'\n';
}
catch(const out_of_range& ex)
{
  cerr<<"An exception occured: "<< ex.what()<<'\n';
}

cout<<"\nCurrent integers3 size is: "<< integers3.size();
integers3.push_back(1000);
cout<<"\nNew integers3 size is: "<<integers3.size()
<<"\nintegers13 now contains: ";
outputVector(integers3);


}

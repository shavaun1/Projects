#include"oldmac1.h"
#include<iostream>


void EiEio()
{
  using std::cout;
  using std::endl;
  cout<<"Ee-igh, Ee-igh, oh!"<< endl;
}

void Refrain()
{
  using std::cout;
  cout<<"Old MacDoland had a farm, ";
  EiEio();
}

void HadA(string animal)
{
  using std::cout;
  cout<<"And on his farm he had a"<<animal<<". ";
  EiEio();
}


void WithA(string noise)
{
  using std::cout;
  using std::endl;
  cout<<"With a "<< noise<<" "<< noise <<" here"<<endl;
//  cout<"And a" << noise<<" "<<noise <<" there"<<endl;  // This line, when activate, produce a complier error: (I think it is complier independent) Try to run it on yours :). 

  cout<<"Here a "<<noise<<", " 
    <<"there a "<<noise<<", " 
    <<"everywhere a"<<noise<<" "<< noise << endl;

}

void Pig()
{
  Refrain();
  HadA("pig");
  WithA("oink");
  Refrain();
}

void Cow()
{
  Refrain();
  HadA("cow");
  WithA("moo");
  Refrain();
}




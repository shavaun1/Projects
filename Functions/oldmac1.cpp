#include<iostream>
#include<string>
using namespace std;

void EiEio()
{
  cout<<"Ee-igh, Ee-igh, oh!" <<endl;
}

void Refrain()
{
  cout<<"Old MacDonald had a farm, ";
  EiEio();
}

void HadA(string animal)
{
  cout<<"And on his farm he had a "<<animal <<", ";
  EiEio();
}

void WithA(string noise)
{
  cout<<"With a "<< noise <<" "<< noise <<" here"<<endl;
  cout<<"And a "<< noise << " "<< noise <<" there"<<endl;

  cout<<"Here a "<<noise <<", "
    <<"there a "<< noise<<", "
    <<" everywhere a "<< noise <<" "<< noise << endl;
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

int main()
{
  Cow();
  cout<<endl;
  Pig();
  return 0;
}

#include<iostream>
#include<string>
using namespace std;

void EiEio()
{
  cout<<"Ee-igh, Ee-igh, oh!"<<endl;
}

void Refrain()
{
  cout<<"Old MacDonald had a farm, ";
  EiEio();
}

void HadA(string animal)
{
  cout<<"And on his farm he had a "<< animal <<", ";
  EiEio();
}

void WithA(string noise)
{
  cout<<"With a "<< noise <<" "<< noise <<" here"<< endl;
  cout<<"And a  "<< noise << " "<< noise<<" there"<<endl;

  cout<<"Here a "<< noise<<", "
    <<"there a "<< noise<<", "
    <<" everywhere a "<< noise<<" "<< noise<<endl;
}

void Verse(string animal, string noise)
{
  Refrain();
  HadA(animal);
  WithA(noise);
  Refrain();
}

int main()
{
  Verse("pig","oink");
  cout<<endl;
  Verse("cow","moo");
  return 0;
}

#include"oldmac2.h"
#include<iostream>

void EiiEio()
{
  using std::endl;
  using std::cout;

  cout<<"Ee-igh, Ee-igh, oh!"<<endl;

}

void Reefrain()
{
  using std::cout;
  using std::endl;

  cout<<"Old MacDonald had a farm, ";
  EiiEio();

}

void HaadA(string animal)
{
  using std::cout;
  using std::endl;
  cout<<"And on his farm he had a "<< animal<<",";
  EiiEio();
}

void WiithA(string noise)
{
  using std::cout;
  using std::endl;
  cout<<"With a "<< noise <<" "<< noise <<" here"<<endl;
  cout<<"And a "<< noise <<" "<< noise << " there"<<endl;

  cout<<"Here a "<< noise <<", "
    <<"there a "<< noise <<", "
    <<"everywhere a "<< noise<<" "<< noise << endl;

}

void Verse(string animal, string noise)
{
  Reefrain();
  HaadA(animal);
  WiithA(noise);
  Reefrain;
}

#include <cstddef>
#include <cstddef>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<string>
#include<fstream>
#include<cctype>
#include<climits>
#include <iostream>
#include <type_traits>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>



using namespace std;

class Pet
{
  public:
    virtual void print();
    string name;

};

class Dog : public Pet
{
  public:
    virtual void print();

    string breed;
};

int main()
{
  Dog vDog;
  Pet vPet;

  vDog.name = "Tiny";
  vDog.breed = "Great Dane";
  vPet = vDog;

  Dog *pDog;
  pDog = new Dog;
  pDog->name = "Triny";
  pDog->breed = "Great Dane";

  Pet *pPet;
  pPet = pDog;
  pPet->print();
  pDog->print();

  return 0;
}

void Dog::print()
{
  cout<<"name: "<< name << endl;
  cout<<"breed: "<<breed << endl;
}

void Pet::print()
{
  cout<<"name: "<<endl;
}

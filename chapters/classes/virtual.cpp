//using virtual base classes
#include<iostream>
using std::cout;

//class Base definition
class Base
{
  public:
    virtual void print() const = 0; // pure virtual 
};

//class DerivedOne definition
class DerivedOne : virtual public Base
{
  public:
    //override print function
    void print()  const override{cout<<"DerivedOne\n";}
};

//class DerivedTwo definition
class DerivedTwo : virtual public Base
{
  public:
    //override print function
    void print() const override{cout<<"DerivedTwo\n";}
};

//class Multiple definition
class Multiple : public DerivedOne, public DerivedTwo
{
  public:
    //qualify which version of function print
    void print() const override{DerivedTwo::print();}
};

int main()
{
  Multiple both;// instantiate Multiple object
  DerivedOne one; //instantiate DerivedOne object
  DerivedTwo two; 
  Base* array[3];

  array[0] = &both; // allowed now
  array[1] = &one;
  array[2] = &two;
   
  //polymorphically invoke function print
  for(int i = 0; i < 3; ++i)
  {
    array[i]->print();
  }

}

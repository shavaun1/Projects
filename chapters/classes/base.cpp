#include<iostream>
#include<format>
#include"base/base1.h"
#include"base/base2.h"
#include"base/Derived.h"

using std::format; using std::cout;

int main()
{
  Base1 base1{10};
  Base2 base2{'Z'}; //create Base2 object
  Derived derived{7,'A',3.5};

  //print data in each object
  cout<<format("{}: {}\n{}: {}\n{}: {}\n\n",
      "Object base1 contains", base1.getData(),
      "Object base2 conatins the character", base2.getData(),
      "Object derived contains", derived.toString());

  //print data memebers of derived-class object
  //scope resolution operator resolves getData ambiguity
  cout<<format("{}\n{}: {}\n{}: {}\n{}: {}\n\n",
      "Data members of derived can be accessed individually:",
      "int", derived.Base1::getData(),
      "char",derived.Base2::getData(),
      "double", derived.getReal());

  cout<<"Derived can be treated as an object of either base class:\n";

  //treat Derived as a Base1 object1 object
  Base1* base1Ptr = &derived;
  cout<<format("base1Ptr->getData() yields {}\n",
      base1Ptr->getData());

  //treat derived as base2 object
  Base2* base2Ptr = &derived;
  cout<<format("base2Ptr->getData() yields {}\n", base2Ptr->getData());
}

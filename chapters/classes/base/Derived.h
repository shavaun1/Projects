//definition of class derviced which inherits
//multiple base classes(base1 and base2)

#pragma once
#include<iostream>
#include<string>
#include"base1.h"
#include"base2.h"

using std::cout; using std::string;

class Derived : public Base1, public Base2
{
  public:
    Derived(int value, char letter, double real);
    double getReal() const;
    string toString() const;
  private:
    double m_real;
};

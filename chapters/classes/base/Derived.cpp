//member-function definition for class derived
#include<format>
#include"Derived.h"

using std::format;
//constructor for derived calls Base1 and Base2 constructors
Derived::Derived(int value, char letter, double real)
  :Base1{value}, Base2{letter}, m_real{real}{}

  //return real
  double Derived::getReal() const{return m_real;}

  //dsipaly all data members of Derived
  string Derived::toString() const
{
  return format("int: {}; char: {}; double: {}",
      Base1::getData(),Base2::getData(),getReal());
}

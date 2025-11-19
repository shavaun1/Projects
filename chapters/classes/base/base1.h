#pragma once

//class Base1 definition
class Base1
{
  public:
    explicit Base1(int value) : m_value{value}{}
    int getData() const {return m_value;}
  private://accessible to derived classes via getData member function
     int m_value;
};

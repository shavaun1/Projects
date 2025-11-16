#include<format>
#include<stdexcept>
#include"salaried.h"

using std::format; using std::string; using std::invalid_argument;
//constructor
Salaried::Salaried(double salary) : m_salary{salary}
{
  if(m_salary < 0.0)
  {
    throw std::invalid_argument("weekly salary must be>= 0.0");
  }
}

//overide compensationmodel pure virtual function earnings
double Salaried::earnings() const {return m_salary;}

//overide compensationmodel pure virtual function toString
string Salaried::toString() const
{
  return format("salary:${:.2f}",m_salary);
}

#include<format>
#include<stdexcept>
#include "salariedemployee.h"

using std::format; using std::string_view; using std:: string;
using std::invalid_argument;

//constructor
salariedemployee::salariedemployee(string_view name, double salary)
  :m_name{name}
{
  setSalary(salary);
}

//set name
void salariedemployee::setName(string_view name)
{
  m_name = name; //should validate
}

//return name
string salariedemployee::getName() const
{
  return m_name;
}

//set salary
void salariedemployee::setSalary(double salary)
{
  if(salary < 0.0)
  {
    throw std::invalid_argument("Salary must be >= 0.0");
  }

  m_salary = salary;

}

  //return salary
  double salariedemployee::getSalary() const
  {
    return m_salary;
  }

  //calaculate earnings
  double salariedemployee::earnings() const
  {
    return getSalary();
  }

  //return string representation of salariedemployee object
  string salariedemployee::toString() const
  {
    return format("name: {}\nsalary: ${:.2f}\n", getName(), getSalary());
  }



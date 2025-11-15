#include<format>
#include<stdexcept>
#include"salariedemployee2.h"

using std::invalid_argument; using std::format; using std::string;
using std::string_view;

//constructor

SalariedEmployee::SalariedEmployee(string_view name, double salary)
: Employee{name}
{
  setSalary(salary);
}

//set salary
void SalariedEmployee::setSalary(double salary)
{
  if(salary < 0.0)
  {
    throw invalid_argument("Weekly salary must be >= 0.0");
  }
  m_salary = salary;
}

//return salary
double SalariedEmployee::getSalary() const 
{
  return m_salary;
}

//calculate earnings;
//override pure virtual function earnings in Employee
double SalariedEmployee::earnings() const
{
  return getSalary();
}

//return a string representation of SalariedEmployee
string SalariedEmployee::toString() const
{
  return format("{}\n{}: ${:.2f}",Employee::toString(),
      "salary",getSalary());
}


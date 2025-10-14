#include<format>
#include<iostream>
#include"employee.h"

using std::format; using std::cout;

//define static member function that returns number of
//Employee objects instantiated(declared static in Employee.h)
int Employee::getCount()
{
  return m_count;
}

Employee::Employee(string_view firstName, string_view lastName,
    const Date &birthDate, const Date &hireDate)
  :m_firstName(firstName),m_lastName(lastName),m_birthdate{birthDate},
  m_hireDate{hireDate}
{
  ++m_count; //increment static count of Employees 
  cout<<format("Employee objet constructor: {} {}\n",m_firstName, m_lastName);
}

//gets string representation of an Employee object
string Employee::toString() const
{
  return format("{},{} Hired: {} Birthday: {}", m_lastName,
      m_firstName, m_hireDate.toString(), m_birthdate.toString());
}

//output Employee object to show when its destructor is called
Employee::~Employee()
{
  cout<<format("~EMployee object destructor: {}, {}\n",m_firstName 
      , m_lastName);
  --m_count; //decrement static count of employees.
}

const string& Employee::getFirstName() const 
{
  return m_firstName;
}

const string& Employee::getLastName() const
{
  return m_lastName;
}

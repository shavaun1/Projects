#include<format>
#include<iostream>
#include"employee.h"

using std::format; using std::cout;

Employee::Employee(string_view firstName, string_view lastName,
    const Date &birthDate, const Date &hireDate)
  :m_firstName{firstName},m_lastName{lastName},m_birthdate{birthDate},
  m_hireDate{hireDate}
{
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
  cout<<format("EMployee object destructor: {}, {}\n",m_lastName
      , m_firstName);
}

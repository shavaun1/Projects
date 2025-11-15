#include<format>
#include"employee2.h"

using std::format; using std::string; using std::string_view;

//constructor 
Employee::Employee(string_view name) : m_name{name}{}//empty body

//set name
void Employee::setName(string_view name)
{
  m_name = name;
}

//get name
string Employee::getName() const
{
  return m_name;
}

//return string representation of an Employee
string Employee::toString() const
{
  return format("name: {}", getName());
}

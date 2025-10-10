#pragma once
#include<string>
#include<string_view>
#include"date.h"

using std::string_view; using std::string;

class Employee
{
  public:
    Employee(string_view firstName, string_view lastName,
        const Date& birthDate, const Date& hireDate);
    string toString() const;
    ~Employee(); // provided to confirm destruction order
  
  private:
    string m_firstName;//composition: member obhect
    string m_lastName;
    Date m_birthdate;
    Date m_hireDate;

};

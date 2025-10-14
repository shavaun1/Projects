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
    const string& getFirstName()const;//return first Name
    const string& getLastName() const;
    ~Employee(); // provided to confirm destruction order
 
    //static member function
    static int getCount();//return # of objects instantiated
  private:
    string m_firstName;//composition: member obhect
    string m_lastName;
    Date m_birthdate;
    Date m_hireDate;

    //static data
    inline static int m_count{0}; //number of object instantiated 

};

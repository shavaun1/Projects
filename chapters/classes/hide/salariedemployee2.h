#pragma once
#include<string>
#include<string_view>
#include"employee2.h"

using std::string_view; using std::string;

class SalariedEmployee final: public Employee
{
  public:
    SalariedEmployee(string_view name, double salary);
    virtual ~SalariedEmployee() =  default; //virtual destructor

    void setSalary(double salary);
    double getSalary() const;

    //keyword override signals intent to override

    double earnings() const override; //calculating earnings
    string toString() const override; //string representation
    
  private:
    double m_salary{0.0};


};

#pragma once
#include<string>
#include<string_view>

using std::string_view; using std::string;

class salariedemployee
{
  public:
    salariedemployee(string_view name, double salary);
    void setName(string_view name);
    string getName() const;

    void setSalary(double salary);
    double getSalary() const;

    double earnings() const;
    string toString() const;

    private:
    string m_name{};
    double m_salary{0.0};
};

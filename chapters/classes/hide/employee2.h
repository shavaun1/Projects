#pragma once
#include<string>
#include<string_view>

using std::string_view; using std::string;
class Employee
{
  public:
    explicit Employee(std::string_view name);
    virtual ~Employee() = default; //compiler generates virtual destructor

    void setName(string_view name);
    string getName() const;

    //pure virtual function makes Employee an abstract base class
    virtual double earnings() const = 0; //pure virtual
    virtual string toString() const; //virtual

  private:
    string m_name;

};

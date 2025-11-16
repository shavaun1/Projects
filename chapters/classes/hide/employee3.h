#pragma once //prevent multiple inclusion of header
#include<string>
#include<string_view>
#include"compensationmodel.h"
using std::string; using std::string_view;

class Employee final
{
  public:
    Employee(string_view name, CompensationModel* modelPtr);
    void setCompensationModel(CompensationModel *modelPtr);
    double earnings() const;
    string toString() const;
  private:
    string m_name{};
    CompensationModel* m_modelPtr{}; //pointe to an implementation object
};

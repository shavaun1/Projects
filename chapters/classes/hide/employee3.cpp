#include<format>
#include<string>
#include"compensationmodel.h"
#include"employee3.h"

using std::string; using std::format; using std::string_view;

//constructor performs "constructor injection" to initialize
//the compensationmodel pointer to a compensationmodel implementation
Employee::Employee(string_view name, CompensationModel* modelPtr)
  :m_name{name}, m_modelPtr(modelPtr) {}

  //set function performs "property injection" to create the
  //compensationmodel pointer to a new compensationmodel implementation
  void Employee::setCompensationModel(CompensationModel* modelPtr)
{
  m_modelPtr = modelPtr;
}

//use the CompensationModel to calculate the Employee's earnings
double Employee::earnings() const
{
  return m_modelPtr->earnings();
};

//return string representation of Employee object
string Employee::toString() const
{
  return format("{}\n{}", m_name, m_modelPtr->toString());
}

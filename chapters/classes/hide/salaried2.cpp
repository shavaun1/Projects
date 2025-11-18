#include<format>
#include<stdexcept>
#include"salaried2.h"

using std::format; using std::invalid_argument;

//constructor
Salaried::Salaried(double salary) : m_salary{salary}
{
  if(m_salary < 0.0)
  {
    throw invalid_argument("Weekly salary must be >= 0.0");
  }
}
//calculate earnings
double Salaried::earnings() const{return m_salary;}

//return string containing Salaried compensation model information
string Salaried::toString() const
{
  return format("salary: ${:.2f}", m_salary);
}

#include<format>
#include<stdexcept>
#include"commissionemployee.h"

using std::format; using std::invalid_argument; using std::string;

//constructor
CommissionEmployee::CommissionEmployee(string_view name, double grossSales,
    double CommissionRate) : Employee{name}
{
  setGrossSales(grossSales);
  setCommissionRate(CommissionRate);
}

//set gross sales amount
void CommissionEmployee::setGrossSales(double grossSales)
{
  if(grossSales < 0.0)
  {
    throw invalid_argument("Gross sales must be >= 0.0");
  }

  m_grossSales = grossSales;
}

//return gross sales amount
double CommissionEmployee::getGrossSales() const 
{
  return m_grossSales;
}

//set Commission Rate
void CommissionEmployee::setCommissionRate(double CommissionRate)
{
  if(CommissionRate <= 0.0 || CommissionRate >= 1.0)
  {
    throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
  }

  m_commissionRate = CommissionRate;
}

//return Commission Rate
double CommissionEmployee::getCommissionRate() const
{
  return m_commissionRate;
}

//calculate earnings
double CommissionEmployee::earnings() const
{
  return getGrossSales() *getCommissionRate();
}

//return string representation of commissionemployee object
string CommissionEmployee::toString() const
{
  return format("{}\n{}: ${:.2f}\n{}: {:.2f}", Employee::toString(),
      "gross sale", getGrossSales(),"Commission Rate",
      getCommissionRate());
}

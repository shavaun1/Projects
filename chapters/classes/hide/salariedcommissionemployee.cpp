#include<format>
#include<stdexcept>
#include "salariedcommissionemployee.h"
using std::string_view; using std::invalid_argument; using std::format;

//constructor
salariedcommissionemployee::salariedcommissionemployee(
    string_view name, double salary, double grossSales,
    double commissionRate
    ) : salariedemployee{name, salary} //call base-class constructor 
{
  setGrossSales(grossSales);//validate & store gross sales
  setCommissionRate(commissionRate);//validate & store commission rate

}

//set gross sales amount
void salariedcommissionemployee::setGrossSales(double grossSales)
{
  if(grossSales < 0.0)
  {
    throw invalid_argument("Gross sales must be >= 0.0");
  }

  m_grossSales = grossSales;
}

//return sales amount
double salariedcommissionemployee::getGrossSales() const
{
  return m_grossSales;
}

//return commission rate
void salariedcommissionemployee::setCommissionRate(double commissionRate)
{
  if(commissionRate <= 0.0 || commissionRate >= 1.0)
  {
    throw invalid_argument("commission rate must be > 0.0 and < 1.0");
  }

  m_commissionRate =  commissionRate;
}

//get commission rate
double salariedcommissionemployee::getCommissionRate() const
{
  return m_commissionRate;
}

//calculate earnings -- using salariedemployee::earnings()
double salariedcommissionemployee::earnings() const
{
  return salariedemployee::earnings() + getGrossSales() * 
    getCommissionRate();
}

//returns string representatin of salariedcommissionemployee object
string salariedcommissionemployee::toString() const
{
  return format("{}gross sales: ${:.2f}\ncommission rate: {:.2f}\n",
      salariedemployee::toString(),getGrossSales(),getCommissionRate());
}

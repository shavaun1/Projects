#include<format>
#include<stdexcept>
#include"commission.h"

using std::format; using std::invalid_argument; using std::string;

//constructor
Commission::Commission(double grossSales, double commissionRate)
  :m_grossSales{grossSales}, m_commissionRate{commissionRate}
{
  if(m_grossSales < 0.0)
  {
    throw invalid_argument("Gross sales must be >= 0.0");
  }
  
  if(m_commissionRate <= 0.0 || m_commissionRate >= 1.0)
  {
    throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
  }
}

//override commissionmodel pure virtual function toString
string Commission::toString() const
{
  return format("gross sales: ${:.2f}; commission rate: {:.2f}",
      m_grossSales, m_commissionRate);
}

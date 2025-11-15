#pragma once
#include <string>
#include<string_view>
#include"employee2.h"

using std::string; using std::string_view;

class CommissionEmployee final:public Employee
{
  public:
    CommissionEmployee(string_view name, double grossSales,
        double commissionRate);
    virtual ~CommissionEmployee() =  default; //virtual destructor

    void setGrossSales(double grossSales);
    double getGrossSales() const;

    void setCommissionRate(double commissionRate);
    double getCommissionRate() const;

    //keyword overide signals intent to overide
    double earnings() const override; //calculate earnings
    string toString() const override; //string representation

  private:
    double m_grossSales{0.0};
    double m_commissionRate{0.0};
};

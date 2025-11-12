#pragma once
#include<string>
#include<string_view>
#include"salariedemployee.h"

using std::string_view; using std::string;

class salariedcommissionemployee: public salariedemployee
{
  public:
    salariedcommissionemployee(string_view name, double salary,
        double grossSales, double commissionRate);

    void setGrossSales(double grossSales);
    double getGrossSales() const;

    void setCommissionRate(double commissionRate);
    double getCommissionRate() const;

    double earnings() const;
    string toString() const;

  private:
    double m_grossSales{0.0};
    double m_commissionRate{0.0};


};

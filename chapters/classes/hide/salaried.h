#pragma once 
#include<string>
#include "compensationmodel.h"

using std::string;

class Salaried final : public CompensationModel
{
  public:
    explicit Salaried(double salary);
    double earnings() const override;
    string toString() const override;

  private:
    double m_salary{0.0};
};

#pragma once
#include<string>

using std::string;

class Salaried
{
  public:
    Salaried(double salary);
    double earnings() const;
    string toString() const;
  private:
    double m_salary{0.0};
};

#pragma once

#include<string>

using std::string;

class Date
{
  public:
    Date(int year, int month, int day);
    string toString() const;
  private:
    int m_year;
    int m_month;
    int m_day;
 
};

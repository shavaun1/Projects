#include<format>
#include<string>
#include "date.h"

using std::string; using std::format;

Date::Date(int year, int month, int day)
  :m_year{year}, m_month{month}, m_day{day} {}

string Date::toString() const
{
  return format("{}-{:02d}-{:02d}",m_year,m_month,m_day);
}

#include<format>
#include<array>
#include<string>
#include "date.h"
#include<stdexcept>
#include <iostream>
using std::invalid_argument; using std::array;
using std::string; using std::format; using std::cout;


Date::Date(int year, int month, int day)
  :m_year{year}, m_month{month}, m_day{day} 
{
  if(m_month < 1|| m_month > monthsPerYear)
  {
    throw invalid_argument{"months must be 1-12"};
  }
  
  if(!checkDay(day))
  {
    throw invalid_argument{"Invalid day for current mnth and year"}; 
  }
  //output Date object to show when its constructor is called
  cout<<format("Date object constructor: {}\n", toString());
}


string Date::toString() const
{
  return format("{}-{:02d}-{:02d}",m_year,m_month,m_day);
}

//get string respresentation of date in the form yyy-mm-dd
Date::~Date()
{
  cout<<format("Date object destructor: {}\n", toString());
}

//utility function to confirm proper day value based on
//month and year; handles leap years too
bool Date::checkDay(int day) const
{
  static const array daysPerMonth
  {0,31,28,31,30,31,30,31,31,30,31,30,31};

  //determine wheater testDay is valid for specified month
  if(1 <= day && day <= daysPerMonth.at(m_month))
  {
    return true;
  }

  //Februray 29 check for leap year
  if(m_month == 2 && day == 29 && (m_year % 400 == 0 ||
        (m_year % 4 == 0 && m_year % 100 != 0)))
  {
    return true;
  }

  return false; // invlid day, based on current m_month and m_year


}

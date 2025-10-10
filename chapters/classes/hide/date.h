#pragma once

#include<string>

using std::string;

class Date
{
  public:
    static const int monthsPerYear{12};// months in a year 
    Date(int year, int month, int day); 
    string toString() const;//date string in yyy-mm-dd format
    ~Date(); // implementation displays when destruction occurs
     
  private:
    int m_year;
    int m_month;
    int m_day;
    
    //utitlity function to check if day is proper for month and year 
    bool checkDay(int day) const;
 
};

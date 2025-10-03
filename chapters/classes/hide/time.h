#pragma once
#include<string>

using std::string;

class Time
{
  public:
    //default constructor becuase it can be called with no arguments.
    explicit Time(int hour = 0,int minute= 0, int second = 0);
    
    //set functions
    void setTime(int hour, int minute, int second);
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);

    //get functions
    int getHour() const; // return hour
    int getMinute() const;
    int getSecond() const;
     
    string to24HourString() const; //24-hour time format string 
    string to12HourString() const;

  private:
    int m_hour{0};
    int m_minute{0};
    int m_second{0};

};

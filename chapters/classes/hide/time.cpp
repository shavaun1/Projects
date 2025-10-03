#include<format>
#include<stdexcept>
#include<string>
#include"time.h"

using std::format; using std::string; 

//Time constructor initialize each data member
Time::Time(int hour, int minute, int second)
{
  setTime(hour, minute, second);
}

//set new Time value using 24-hour time 
void Time::setTime(int hour, int minute, int second)
{
  //validate hour, minute and second
  if((hour < 0 || hour >=24) || (minute < 0 || minute >= 60 )||
      (second < 0 || second >=60))
  {
    throw std::invalid_argument
    {
      "hour, minute or second was out of range"
    };
  }
  m_hour = hour;
  minute = minute;
  m_second = second;
}

//set hour value
void Time::setHour(int hour)
{
  setTime(hour, m_minute, m_second);
}

void Time::setMinute(int minute)
{
  setTime(m_hour, minute, m_second);
}

void Time::setSecond(int second)
{
  setTime(m_hour, m_minute, second);
}

//return hour value 
int Time::getHour() const 
{
  return m_hour;
}

int Time::getMinute() const
{
  return m_minute;
}

int Time::getSecond() const
{
  return m_second;
}

//return Time as string in 24-hour format(HH:MM:SS)
string Time::to24HourString() const
{
  return format("{:02d}:{:02d}:{:02d}", m_hour, m_minute, m_second);
}

//return Tine as string in 12-hour format(HH:MM:SS AM or PM)
string Time::to12HourString() const
{
  return format("{}:{:02d}:{:02d} {}",
      ((m_hour % 12 == 0) ? 12: m_hour % 12), m_minute,m_second,
      (m_hour < 12 ? "AM":"PM"));
}

#include<format>
#include<iostream>
#include<stdexcept>
#include<string_view>
#include"hide/time.h"

using std::format; using std::string_view; using std::cout; 
using std::invalid_argument; using std::cerr;

void  displayTime(string_view message, const Time& time)
{
  cout<<format("{}\n24-hour time: {}\n12-hour time: {}\n\n",
      message, time.to24HourString(), time.to12HourString());
}


int main()
{

  const Time t1{};// all arguments defaulted
  const Time t2{2}; // hour specified; minute & second defaulted 
  const Time t3{21, 34};//hour  & minute specified; second defaulted 
  const Time t4{12, 25, 42}; // hour, minute & second specified
  
  cout<<"Constructed with:\n\n";
  displayTime("t1: all arguments defaulted",t1); //display "t" inital value
  displayTime("t2: hour specified; minute and second defaulted", t2);
  
  displayTime("t3: hour and minute specified; second defaulted", t3); //display "t" new value
  displayTime("t4: hour, minute and second specified", t4);
  //attempt to set the time with invalud values
  try
  {
    const Time t5{27,74,99}; //all values out of range
  }
  catch(const invalid_argument& e)
  {
    cerr<<format("t5 not created: {}\n", e.what());
  }


}

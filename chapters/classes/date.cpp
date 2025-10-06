#include"hide/date.h"
#include<format>
#include<iostream>

using std::format; using std::cout; 

int main()
{
  const Date date1{1994,03,20};

  Date date2{2025,10,06};

  cout<<format("date1: {}\ndate2: {}\n\n", date1.toString(), date2.toString());
  date2 = date1;
  cout<<format("After assignment, date2: {}\n", date2.toString());
}

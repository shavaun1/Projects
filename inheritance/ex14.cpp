#include<iostream>
#include"packs/date4.h"
using std::cout;
using std::endl;

int main()
{
  DateU oldDate(4,1,2011), newdate;

  cout<<"The initial date is ";
  oldDate.showDate();
  cout<<endl;

  newdate = oldDate +284;
  cout<<"The new date is ";
  newdate.showDate();
  cout<<endl;

  return 0;
}

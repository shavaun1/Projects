#include<string>
#include<iostream>
#include"hourlyemployee.h"
using namespace std;

namespace employeessavitch
{
  HourlyEmployee::HourlyEmployee():Employee(),wageRate(0),hours(0)
  {

  }

  HourlyEmployee::HourlyEmployee(string theName, string theNumber, double theWageRate, double theHours):
    Employee(theName, theNumber), wageRate(theWageRate), hours(theHours)
  {

  }

  void HourlyEmployee::setRate(double newWageRate)
  {
    wageRate = newWageRate;
  }

  double HourlyEmployee::getRate() const
  {
    return wageRate;
  }

  void HourlyEmployee::setHours(double hoursWorked)
  {
    hours = hoursWorked;
  }

  double HourlyEmployee::getHOurs() const
  {
    return hours;
  }

  void HourlyEmployee::printCheck()
  {
    setNetPay(hours* wageRate);

    cout<<"n_______________________________________________\n";
    cout<<"Pay to the order of "<<getName()<< endl;
    cout<<"The sum of "<< getNetpay()<<" Dollars\n";
    cout<<"Check STub: NOT NEGOTIABLE\n";
    cout<<"Employee Number: "<<getSSN()<< endl;
    cout<<"Hourly Employee, \nHours worked: "<< hours
      <<" Rate: "<<wageRate << " Pay: "<< getNetpay()<< endl;
    cout<<"______________________________________________\n";
  }
}

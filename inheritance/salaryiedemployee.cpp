#include<iostream>
#include <string>
#include "salariedemployee.h"
using namespace std;

namespace employeessavitch
{
  SalariedEmployee::SalariedEmployee():Employee(), salary(0)
  {

  }
  SalariedEmployee::salariedemployee(string theName, string theNumber, double theWeeklySalary)
    :Employee(theName, theNumber), salary(theWeeklySalary)
  {

  }

  double SalariedEmployee::getSalary() const
  {
    return salary;
  }

  void SalariedEmployee::setSalary(double newSalary)
  {
    salary = newSalary;
  }

  void SalariedEmployee::printCheck()
  {
    setNetPay(salary);
    cout<<"\n_________________________________________\n";
    cout<<"Pay to the order of "<< getName() << endl;
    cout<<"The sum of "<< getNetPay()<<" Dollars\n";
    cout<<"__________________________________________\n";
    cout<<"Check Stub NOT NEGOTIABLE \n";

  }

  void SalariedEmployee::printCheck()
  {
    setNetPay(salary);
    cout<<"\n_________________________________________";
    cout<<"Pay to the order of "<<getName()<< endl;
    cout<<"The sum of "<< getNetPay()<<" Dollars\n";
    cout<<"__________________________________________";
    cout<<"Check Stub NOT NEGOTIABLE \n";
    cout<<"Employee Number: "<< getSSN()<<endl;
    cout<<"Salaried Employee. Regular Pay: "
      <<salary << endl;
    cout<<"__________________________________________\n";
  }
}

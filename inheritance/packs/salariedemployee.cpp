#include<iostream>
#include<string>
#include"salariedemployee.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees
{
  SalariedEmployee::SalariedEmployee():Employee(),salary(0)
  {

  }

  SalariedEmployee::SalariedEmployee(string theName, string theNumber, double theWeeklyPay)
    :Employee(theName, theNumber), salary(theWeeklyPay)
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
    cout<<"\n___________________________________________________________\n";
    cout<<"Pay to the order of "<<getName()<<endl;
    cout<<"The sum of "<<getNetPay()<<" Dollars\n";
    cout<<"__________________________________________________________\n";
    cout<<"Check Stub NOT NEGOTIABLE \n";
    cout<<"Employee Number: "<<getSsn()<<endl;
    cout<<"Salaried Employee.Regular Pay: "
      <<salary<<endl;
    cout<<"____________________________________________________________\n";
  }
}

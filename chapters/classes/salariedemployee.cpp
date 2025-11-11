#include "hide/salariedemployee.h"
#include<format>
#include<iostream>

using std::cout; using std::format;

int main()
{
  //instantiate a salariedemployee object
  salariedemployee employee{"sue jones", 300.0};

  //get salariedemployee data
  cout<<"employee information obtained by get functions: \n"
    <<format("name: {}\nsalary: ${:.2f}\n", employee.getName(),
        employee.getSalary());

  employee.setSalary(500.00); // change salary
  cout<<"\nupdated employee information from function to string:\n"
    <<employee.toString();

  //display only the employee's earnings
  cout<<format("\nearnings: ${:.2f}\n", employee.earnings());

}

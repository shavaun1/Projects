#include<format>
#include<iostream>
#include "hide/salariedcommissionemployee.h"

using std::cout; using std::format;

int main()
{
  //instantiate salariedcommissionemployee object
  salariedcommissionemployee employee{"Bob Lewis", 300.00, 5000.0, .04};

  //get salariedcommissionemployee data
  cout<<"Employee information obtained by get functions:\n"
    <<format("{}: {}\n{}: {:.2f}\n{}: {:.2f}\n{}: {:.2f}\n",
        "name", employee.getName(), "salary", employee.getSalary(),
        "gross sales", employee.getGrossSales(),"commission",
        employee.getCommissionRate());

  employee.setGrossSales(8000.0); //change grss sales
  employee.setCommissionRate(0.1); //change commission rate
  cout<<"\nUpdate employee information from function toString:\n"
    <<employee.toString();

  //display the employee's earnings
  cout<<format("\nearnings: ${:.2f}\n", employee.earnings());
}

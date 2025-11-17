#include<format>
#include<iostream>
#include<vector>
#include"hide/employee3.h"
#include"hide/salaried.h"
#include"hide/commission.h"


using std::format; using std::cout; using std::vector;

int main()
{
  //create CompensatinModel and Employees
  Salaried salaried{800.0};
  Employee salariedEmployee{"John smith",&salaried};

  Commission commission{1000, .06};
  Employee commissionEmployee{"Sue Jones", &commission};

  //create and initialize vector of employees
  vector employees{salariedEmployee, commissionEmployee};

  //print each employee's information and earnings
  for(const Employee& employee : employees)
  {
    cout<<format("{}\nearned: ${:.2f}\n\n",employee.toString(),
        employee.earnings());
  }

}

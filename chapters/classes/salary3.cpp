#include<format>
#include<iostream>
#include<vector>
#include"hide/employee2.h"
#include"hide/salariedemployee2.h"
#include"hide/commissionemployee.h"

using std::format; using std::vector; using std::cout;

void virtualViaPointer(const Employee* baseClassPtr); //prototype
void virtualViaReference(const Employee& baseClassRef);//prototype

int main()
{
  //create derived-class objects
  SalariedEmployee salaried{"john smith",800.0};
  CommissionEmployee commission{"sue jones", 1000,.06};

//output eash Employee
cout<<"Employee processed individually via variable name\n"
<<format("{}\n{}{:.2f}\n\n{}\n{}{:.2f}\n\n",
    salaried.toString(),"earned $",salaried.earnings(),
    commission.toString(),"earned $",commission.earnings());

//create and initialize vector of base-class pointers
vector<Employee*> employees{&salaried, &commission};

cout<<"EMPLOYEES PROCESSED POLYMORPHICALLY VIA"
  <<" DYNAMIC BINDING\n\n";

//call virtualViaPointer to print each employee
//and earning using dynamic binding

cout<<"VIRTUAL FUNCTION CALLS MADE VIA BASE-CLASS POINTERS\n";

for(const Employee* employeePtr : employees)
{
  virtualViaPointer(employeePtr); 
}

//call virtualViaReference to print each Employee
//and earnings using dynamic binding
cout<<"VIRTUAL FUNCTION CALLS MADE VIA BASE-CLASS REFERENCE\n";

for(const Employee* employeePtr : employees)
{
  virtualViaReference(*employeePtr);//notes to dereferenced pointer
}


}

void virtualViaPointer(const Employee* baseClassPtr)
{
  cout<<format("{}\nearned ${:.2f}\n\n",
      baseClassPtr->toString(),baseClassPtr->earnings());
}

//call employee virtual functions toString and earnings via a
//base-class refernce using dynamic binding
void virtualViaReference(const Employee& baseClassRef)
{
  cout<<format("{}\nearned ${:.2f}\n\n",
      baseClassRef.toString(),baseClassRef.earnings());
}

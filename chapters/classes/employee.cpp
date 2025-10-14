#include<format>
#include<iostream>
#include"hide/date.h"
#include"hide/employee.h"
using std::cout; using std::format;


int main()
{
  //no object exist; use class name and scope resolution
  //operator to access static member function getCount 
  cout<<format("Initial employee count: {}\n",
      Employee::getCount());

  //the following scope creates and destroys
  //Emloyee objects before main terminates
  {
    const Employee e1{"Susan","Baker"};
    const Employee e2{"Robert","Jones"};
    
    //two objects exit; call static member function getCount again
    //using the class name and the scope resolution operator 
    cout<<format("Employee count after creating objects: {}\n\n",
        Employee::getCount());

    cout<<format("Employee 1: {} {}\nEmployee 2: {} {}\n\n",
        e1.getFirstName(), e1.getLastName(),
        e2.getFirstName(),e2.getLastName());
  }

  cout<<format("Emploee count after objects are deleted: {}\n",
      Employee::getCount());

  const Date birth{1994, 03, 20};
  const Date hire{2025, 10,10};
  const Employee manager{"shavaun","jackson", birth, hire};

  cout<<format("\n{}\n\n", manager.toString());
}

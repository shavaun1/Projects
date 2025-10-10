#include<format>
#include<iostream>
#include"hide/date.h"
#include"hide/employee.h"

int main()
{
  const Date birth{1994, 03, 20};
  const Date hire{2025, 10,10};
  const Employee manager{"shavaun","jackson", birth, hire};

  std::cout<<format("\n{}\n\n", manager.toString());
}

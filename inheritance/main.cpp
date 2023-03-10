#include <iostream>
#include "hourlyemployee.h"
#include "salariedemployee.h"
using std::cout;
using std::endl;
using namespace employeessavitch;

int main()
{
  HourlyEmployee shavaun;
  shavaun.setName("coder pro");
  shavaun.setSSN("123-45-789");
  shavaun.setRate(100.86);
  shavaun.setHours(40);

  cout<<"Check for "<<shavaun.getName()
    <<" for "<<shavaun.getHOurs()<<" hours.\n";
  shavaun.printCheck();
  cout<< endl;

  SalariedEmployee boss("GOD", "66-666-66", 9000.50);
  cout<<"Check for "<< boss.getName()<< endl;
  boss.printCheck();

  return 0;
}

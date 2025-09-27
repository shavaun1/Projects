#include "hide/grade.h"
#include<format>
#include<iostream>
using std::format; using std::cout;

int main()
{
  Account account1{"Jane Green", 50.00};
  Account account2{"JOhn Blue", -7.00};

  cout<<format("account1: {} balance is $(:.2f)\n",
      account1.getName(),account1.getBalance());
  cout<<format("account2: {} balanace is ${:.2f}\n\n",
      account2.getName(), account2.getBalance());
}

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

  cout<<"Enter deposit amont for account1: ";
  double amount;
  std::cin >> amount;
  cout<<format("adding ${:.2f} to account1 balance\n\n", amount);
  account1.deposit(amount);

  cout<<format("account1: {} balance is ${:.2f}\n",account1.getName(),
      account1.getBalance());
  cout<<format("account2: {} balance is ${:.2f}\n\n",account2.getName(),
      account2.getBalance());

  cout<<"ENter deposit amount for account2: ";
  std::cin >> amount;
    cout<< format("adding ${:.2f} to account2 balance\n\n", amount);
    account2.deposit(amount);

    cout<<format("account1: {} balance is ${:.2f}\n", account1.getName(),
        account1.getBalance());
    cout<<format("account2:.{} baalnce is ${:.2f}\n",account2.getName(),
        account2.getBalance());
}

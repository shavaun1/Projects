#include"hide/account.h"
#include<format>
#include<iostream>
#include<string>

using std::format; using std::cout; using std::string; using std::getline;
using std::cin;

int main()
{
  Account myAccount{};

  cout<<format("Initial account name: {}\n", myAccount.getName());

  cout<<"Enter the account name: ";
  string name{};
  getline(cin, name);
  myAccount.setName(name);

  cout<<format("Updated account name: {}\n", myAccount.getName());
}


#include"hide/name.h"
#include<format>
#include<iostream>

using std::format; using std::cout; 

int main()
{
  Account account1{"Jame Green"};
  Account account2{"John Blue"};

  cout<<format("accout1 name is: {}\naccount2 name is: {}\n",
      account1.getName(),account2.getName());
}

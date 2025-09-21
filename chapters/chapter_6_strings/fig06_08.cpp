#include<format>
#include<iostream>
#include<string>
using std::format; using std::cout; using std::string;

int main()
{
  string s1{"begining end"};
  string s2{"12345678"};

  cout<<format("Initial string:\ns1: {}\ns2: {}\n\n", s1,s2);

  s1.insert(10,"middle ");
  s2.insert(3,"xx",0,string::npos);

  cout<<format("Steing after insert:\ns1: {}\ns2: {}\n",s1,s2);
}

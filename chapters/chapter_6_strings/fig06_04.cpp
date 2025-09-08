#include<iostream>
#include<format>
#include<string>

using std::format; using std::cout; using std::string;

int main()
{
  string s1{"one"};
  string s2{"two"};

  cout<<format("Before swap:\ns1: {}; s2: {}", s1, s2);
  s1.swap(s2);
  cout<<format("\n\nAfter swap:\ns1: {}; s2: {}", s1, s2);
}

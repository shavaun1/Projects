#include"Head/fig06_05.h"
#include<iostream>
#include<string>
#include<format>
using std::cout; using std::string;using std::cin; using std::format;

int main()
{
  string string1;

  cout<<"Statistics before input:\n";
  printStatistics(string1);

  cout<<"\n\nEnter a string: ";
  cin>> string1;
  cout<<format("The string entered was: {}\n", string1);
  cout<<"Statistics after input:\n";
  printStatistics(string1);
  cout<<"\n\nEnter a string: ";
  cin>>string1;
  cout<<format("The string entered was: {}\n", string1);
  cout<<"Statistics after input:\n";
  printStatistics(string1);
  
  string1 +="1234567890abcdefghijklmnopqrstuvwxyz1234567890";
  cout<<format("\n\nstring1 is now: {}\n",string1);
  cout<<"Statistics after concatenation:\n";
  printStatistics(string1);

  string1.resize(string1.size()+10);
  cout<<"\n\nStatistics after resizing toadd 10 chararcters: \n";
  printStatistics(string1);
  cout<<'\n';
}

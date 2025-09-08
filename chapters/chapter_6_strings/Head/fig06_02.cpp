#include"fig06_02.h"
#include<string>
#include<iostream>
#include<format>

using std::format; using std::string; using std::cout;

void displayResult(const string& s, int result)
{
  if(result == 0)
  {
    cout<<format("{} == 0\n",s);
  }
  else if(result > 0)
  {
    cout<<format("{} > 0\n", s);
  }
  else
  {
    cout<<format("{} < 0\n", s);
  }
}

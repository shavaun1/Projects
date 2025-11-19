#pragma once
#include<string_view>
#include<string>
using std::string_view; using std::string;

class Account{

  public:
void setName(string_view name)
{
  m_name = name;
}

const string& getName() const
{
  return m_name;
}

  private:
string m_name;

};


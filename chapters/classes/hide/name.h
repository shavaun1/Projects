#pragma once

#include<string>
#include<string_view>

using std::string; using std::string_view;

class Account
{
  public:
    explicit Account(string_view name):m_name{name}
    {

    }

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



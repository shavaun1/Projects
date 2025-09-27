#ifndef GRADE_
#define GRADE_

#include<algorithm>
#include<string>
#include<string_view>

using std::string_view; using std::string; using std::max;

class Account
{
  public:
    Account(string_view name, double balance)
      :m_name{name}, m_balance{max(0.0,balance)}
    {

    }

    void deposit(double amount)
    {
      if(amount > 0.0)
      {
        m_balance += amount;
      }
    }

    double getBalance() const
    {
      return m_balance;
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
    double m_balance;

};

#endif

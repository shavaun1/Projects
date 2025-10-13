#include<format>
#include<iostream>
//#include"hide/friend.h"
using std::format; using std::cout;


class Count{
  friend void setX(Count& c, int value);
  public:
  int getX() const
  {
    return m_x;
  }

  private:
  int m_x{0};

};

void modifyX(Count& c, int value)
{
  c.m_x = value;
}




int main()
{
  Count counter{};// create Count object
  
  cout<<format("Initial counter.m_x: {}\n", counter.getX());
  modifyX(counter, 8);// change x's value using a friend function
  cout<<format("counter.m_x after modifyX: {}\n", counter.getX());


}

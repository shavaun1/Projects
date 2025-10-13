#include<format>
#include<iostream>

using std::format; using std::cout;

class Test
{
  public:
    explicit Test(int value);
    void print() const;

  private:
    int m_x{0};

};

//constructor
Test::Test(int value) : m_x{value}{}// initialize m_x to value


void Test::print() const
{
  cout<<format("     m_x = {}\n", m_x);

  //explcitly use the this pointer and the arrow operator
  //to access the member m_x

  cout<<format("  this-> m_x = {}\n", this->m_x);

  //explcitly use the dereferenced this pointer and
  //the dot operator to access the member m_x
  cout<<format("(*this).m_x = {}\n", (*this).m_x);
}

int main()
{
  const Test testObject{12}; //instantiate and initialize testObject
  testObject.print();
}

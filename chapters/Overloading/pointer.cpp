#include<format>
#include<iostream>
#include<memory>

using std::format; using std::cout; using std::make_unique;


class Integer
{
  public:
    //constructor
    Integer(int i) : value{i}
    {
      cout<<format("Constructor for Integer {}\n", value);
    }

    //destructor
    ~Integer()
    {
      cout<<format("Destructor for Integer {}\n", value);
    }

    int getValue() const
    {
      return value;
    }

  private:
    int value{0};
};

//use unique_ptr to manipulate Integer object

int main()
{
  cout<<"Create a unique_ptr that points to an Integer\n";

  //create a unique_ptr object and "aim" it at a new include object
  auto prt{make_unique<Integer>(7)};

  //use unique_ptr to call an Integer member function
  cout<<format("Integer value: {}\n\nMain ends\n", prt->getValue());
}

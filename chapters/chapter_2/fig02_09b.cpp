//logical operators
#include<iostream>
#include<format>

using std::cout; using std::format;

int main()
{
  cout<<"Logical AND(&&)\n"
    <<format("false && false: {}\n",false && false)
    <<format("false && true: {}\n", false && true)
    <<format("true && false: {}\n", true && false)
    <<format("treu && true: {}\n\n", true && true);

  cout<<"Logical OR(||)\n"
    <<format("false || flase: {}\n", false || false)
    <<format("false || true: {}\n", true || false)
    <<format("true || true: {}\n\n", true|| true);

  cout<<"Logical negation(!)\n"
    <<format("!false: {}\n", !false)
    <<format("!true: {}\n", !true);
}

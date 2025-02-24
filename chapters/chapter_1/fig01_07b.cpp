#include<iostream>
#include<format>
#include<string>


using std::cout; using std::format; using std::string;

int main()
{
  string student{"Paul"};
  int grade{87};

  cout<<format("{}'s grade is {}\n", student, grade);
}

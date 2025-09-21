#include<iostream>
#include<sstream>
#include<string>
#include<format>

using std::format; using std::istringstream; using std::cout;
using std::string;

int main()
{
  const string inputString{"Amanda test 123 4.7 A"};
  istringstream input{inputString};
  string s1;
  string s2;

  int i; 
  double d;
  char c;

  input>> s1 >> s2 >> i >> d >> c;

  cout <<"Items extracted from the istringstream object:\n"
    <<format("{}\n{}\n{}\n{}\n{}\n", s1, s2, i, d, c);

  if(long value; input >> value)
  {
    cout<<format("\nlong value is: {}\n", value);
  }
  else
  {
    cout<<format("\ninput is empty\n");
  }
}

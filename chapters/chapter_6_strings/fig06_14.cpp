#include<format>
#include<iostream>
#include<regex>
#include<string>

using std::format; using std::string; using std::regex_replace;
using std::cout;using std::regex;

int main()
{
  string s1 {"1\t2\t3\t4"};
  cout<< format("Original string: {}\n", R"(1\t2\t3\t4)")
    <<format("After replacing tabs with commas: {}\n",
        regex_replace(s1, regex{"\t"},","));
}

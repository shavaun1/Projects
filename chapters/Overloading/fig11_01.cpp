#include<format>
#include<iostream>
#include<string>
#include<string_view>

using std::cout; using std::format; using std::string; using std::string_view;

int main()
{
  string s1{"happy"}; //intialize string from char*
  string s2{"birthday"};//intialize string from char*
  string s3; //create an empty string 
  string_view v{"hello"}; //intialize string_view from char*
  
  //output string and string_view 
  cout<<"s1: \"" << s1 <<"\"; s2: \"" << s2 
    <<"\"; s3: \"" << s3 << "\"; v: \"" << v << "\"\n\n";
  
  //test overloaded equality and relational operators
  cout<<"The results of comparing s2 and s1:\n"
    <<format("s2 == s1: {}\n", s2 == s1)
    <<format("s2 != s1: {}\n", s2 != s1)
    <<format("s2 > s1: {}\n", s2 > s1)
    <<format("s2 < s1: {}\n", s2 < s1)
    <<format("s2 >= s1: {}\n", s2 >= s1)
    <<format("s2 <= s1: {}\n\n", s2 <= s1);

  //test string member function empty
  cout<<"Testing s3.empty():\n";

  if(s3.empty())
  {
    cout<<"s3 is empty; assigning s1 to s3;\n";
    s3 = s1; // assign s1 to s3
    cout <<format("s3 is \"{}\"\n\n",s3);
  }

}

#include<format>
#include<iostream>
#include<string>
#include<string_view>

using std::cout; using std::format; using std::string; using std::string_view; using std::out_of_range;

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

  //test overloaded string concatention assignment operator 
  s1 += s2;// test overloaded concatention
  cout<<format("s1 += s2 yields s1 = {}\n\n", s1);

  //test string concatention with a C string
  s1 +=" to you";
  cout<<format("s1 += \" to you\" yields s1 = {}\n\n",s1);

  //test string concatention with c++14 string-object literal
  using namepace std:string_literals;
  s1 +=", have a great day!"s; // s after " for string-object literal
  cout<<format("s1 += \", have a great day!\"s yields\ns1 = {}\n\n",s1);

  //test using overloaded subscript operator to create lvalue
  s1[0] = 'H';
  s1[6] = 'B';
  cout<<format("{}:\n{}\n\n","after s1[0] = 'H' and s1[6] = 'B', s1 is", s1);

  //test index out of range with string member function "at"
  try
  {
    cout<<"Attempt to assign 'd' to s1.at(100) yields: \n";
    s1.at(100) = 'd'; //Error: subscript out of range 
  }
  catch(const std::out_of_range& ex)
  {
    cout<<format("An exception occured: {}\n", ex.what());
  }

}

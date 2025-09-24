#include<format>
#include<iostream>
#include<regex>
#include<string>

using std::string; using std::regex_search; using std::regex;
using std::cout; using std::format; using std::smatch;

int main()
{
  string s1{"Programming is fun"};
  cout<<format("s1: {}\n\n", s1);
  cout<<"Search anywhere in s1:\n"
    <<format("Programming: {}; fun: {}; fn: {}\n\n",
        regex_search(s1,regex{"Programming"}),
        regex_search(s1,regex{"fun"}),
        regex_search(s1,regex{"fn"}));

  string s2{"SAM WHITE"};
  smatch match;
  cout<<format("s2: {}\n\n", s2);
  cout<<"Case insensitive search for Sam in s2:\n"
    <<format("Sam: {}\n", regex_search(s2, match,
          regex{"Sam", std::regex_constants::icase}))
    <<format("Macthed text: {}\n\n", match.str());

  string contact { "Wally White, Home: 555-55-1234, Work: 555-555-4321"};
  regex phone{R"(\d{3}-\d{3}-\d{4})"};

  cout<<format("Finding phone numbers in: \n{}\n", contact);
  while(regex_search(contact, match, phone))
  {
    cout<<format("   {}\n", match.str());
    contact = match.suffix();
  }
}

#include<iostream>
#include<string>

using std::cout; using std::string;

int main()
{
  const string s{"airplane"};
  cout<<s.substr(3,4)<<'\n';
}

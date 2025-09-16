#include<format>
#include<iostream>
#include<string>

using std::cout; using std::format; using std::string;

int main()
{
  const string s{"noon is 12pm; midnight is not"};
  cout<<"Original string: "<< s;

  cout<<format("\ns.find(\"is\"): {}\ns.rfind(\"is\"): {}", s.find("is"),s.rfind("is"));

  int location{s.find_first_of("misop")};
  cout<<format("\ns.find_first_of(\"misop\") found {} at {}",
      s.at(location), location);

  location = s.find_last_of("misop");
  cout<<format("\ns.find_last_of(\"misop\") found {} at {}",
      s.at(location), location);

  location = s.find_first_not_of("noi spm");
  cout<<format("\ns.find_first_not_of(\"noi spm\") found {} at {}",
      s.at(location),location);

  location = s.find_first_not_of("12noi spm");
  cout<<format("ns.find_first_not_of(\"12noi spm\") found {} at {}", s.at(location),location);

  location = s.find_first_not_of("noon is 12pm; might is not");
  cout<<format("\n{}: {}\n", "s.find_first_not_of(\"noon is 12pm; midnight is not\)", location);
}

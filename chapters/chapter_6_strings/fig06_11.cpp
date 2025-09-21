#include<iostream>
#include<sstream>
#include<string>

using std:: cout; using std::string; using std::ostringstream;;

int main()
{
  ostringstream output;

  const string string1{"Output of several data types "};
  const string string2{"to an ostringstream object:"};
  const string string3{"\ndouble: "};
  const string string4{"\n int: "};

  constexpr double d{123.4567};
  constexpr int i{22};

  output<<string1 << string2 << string3 << d << string4 << i;

  cout<<"output conatins: \n"<<output.str();

  output<<"\nmore characters added";
  cout<<"\n\noutput now conatins:\n"<<output.str()<<'\n';
}

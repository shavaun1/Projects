#include<cstdlib>
#include<format>
#include<iostream>
#include<string>
#include<fstream>

using std:: cout; using std::string; using std::format;
using std:: ofstream; using std:: ios;

int main()
{
  if(ofstream output{"clients.txt",ios::out})
  {
    cout<<"Enter the account, name, and balance.\n"
      <<"Enter end-of-file to end input.\n? ";

    int account;
    string name;
    double balance;

    while(std::cin>> account>> name >> balance)
    {
      output << format("{} {} {}\n", account, name, balance);
      cout<<"? ";
    }
  }
  else
  {
    std::cerr <<"File could not be opened\n";
    std::exit(EXIT_FAILURE);
  }
}

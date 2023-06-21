#include <string>
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void echo(const string message);

int main()
{
  string word;
  cout<<"Enter your word: ";
  cin >> word;

  echo(word);

  return 0;

}

void echo(const string message)
{
  cout<< message << endl;
}

#include <string>
#include<iostream>
#include"packages/echo.h"


int main()
{
  using std::cout;
  using std::endl;

  string word;
  cout<<"Enter your word: ";
  cin >> word;

  echo(word);

  return 0;

}



#include"ask.h"
#include <iostream>
#include<math.h>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::endl;
 
Ask::Ask(int x, int y, string o)
{
  a = x;
  b = y;
  n = o;

}

int Ask::age()
{
  cout<<"What is your age? "<<endl;
  cin>> b;
 // if(b )
  return b;
}

void Ask::quest()
{
  cout<<"So what is your name? ";
  cin >> n;
  cout<<"Hello "<< n <<", we are using C++ for this project."<< endl;
  cout<< n <<". for your age,  "<<age() << endl;
  return;
}

#include"ask.h"
#include <iostream>
#include<math.h>
#include<string>
#include<ctime>
using std::cout;
using std::cin; using std::string;
using std::endl; using std::time_t;
using std::time; using std::asctime; using std::localtime;
 
Ask::Ask(int x, int y, string o)
{
  a = x;
  b = y;
  n = o;

}

int Ask::age()
{
  cin>> b;
 // if(b )
  return b;
}

void Ask::timez()
{
  time_t result = time(nullptr);
  char *tm = ctime(&result); 
  cout<<"The date and time is " << tm <<endl;
  return;
}

void Ask::quest()
{
  cout<<"So what is your name? ";
  cin >> n;
  cout<<"Hello "<< n <<", we are using C++ for this project."<< endl;
  cout<< n <<". What is your age?  "<<age() << endl;
  cout<<"Here is something random, the time is "<<timez()<< endl;

  return;
}



#include"Librarycard.h"
#include<chrono>
#include <iostream>
#include<string>
using std::cout;using std::cin; using std::string;
using std::endl; using std::getline;

void Librarycard::clock()
{
  const std::chrono::time_point now{std::chrono::system_clock::now()};
  const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
  cout<<"Year: "<<static_cast<int>(ymd.year())<<", "
    <<"Month: "<<static_cast<unsigned>(ymd.month())<<", "
    <<"Day: "<<static_cast<unsigned>(ymd.day())<<endl;
  cout<<"ymd: "<<ymd<< endl;
  return;
}

 

 void Librarycard::setLibrarycard()
 { 
      string fullname; int age;
      cout<<"What is your full name? ";
      std::getline(std::cin,fullname);
      cout <<"What is your age? ";
      cin >> age;
      cout<<"******************************"<<endl;
      cout<<"******************************"<<endl;
      cout<<"Name: "<<fullname<<endl;
      cout<<"Age: "<<age<<endl;
      clock();
     return;
}






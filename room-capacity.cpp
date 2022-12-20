#include <cstddef>
#include <cstddef>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<string>
#include<fstream>
#include<cctype>
#include<climits>
#include <iostream>
#include <type_traits>
#include<iomanip>
#include<cstring>
#include<cstdlib>





//a program that determines whether a meeting room is in violation of
//fire law regulations regarding the maximum room capacity. The program
//will read in the maximum room capacity and the number of people at-
//tending the meeting. If the number of people is less than or equal to the
//maximum room capacity, the program announces that it is legal to hold
//the meeting and tells how many additional people may legally attend. If
//the number of people exceeds the maximum room capacity, the program
//announces that the meeting cannot be held as planned due to fire regula-
//tions and tells how many people must be excluded in order to meet the
//fire regulations.


int main()
{
  
  using namespace std;
  
  int maximun = 200, people;

  cout<<"Meeting room capacity\n\n";

  cout<<"Enter the number of people attending the meeting: ";
  cin >> people;

  cout<< endl;
  
  if(people <= maximun)
  {
    cout<<"It's legal to hold the meeting, an additional "
      << maximun - people <<" people may legally attend.";
  }
  else if(people > maximun )
  {
    cout<<"The meeting cannot be held as planned due to fire regulations, "
      <<(people - maximun) <<" people must be excluded in order to meet the "
      <<"fire regulations.";
  }
  
  
  return 0;
}






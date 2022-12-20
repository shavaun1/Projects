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


//simple conversational dialog program. Your program should
//do the following:
//Say “Hello” to the user.
//Ask them if they are having a good day, and record their input.
//If their response is anything other than a ‘y’ for yes or an ‘n’ for no,
//repeat the question.
//If they respond with a ‘y’, output “I’m glad to hear that”, and if they
//answer with an ‘n’, then output “I hope your day gets better soon.”

int main()
{
  
  using namespace std;
  
  char e; 
  
  do
  {
  
  cout<<"Hello \n";
  cout<<"Are you having a good day? (Y/N) ";
  cin >> e;

  if(e == 'Y' || e == 'y')
  {
  
    
  cout<<"I'm glad to hear that \n";
  break; 
 
  }
  else if( e == 'n' || e == 'N' )
  {
  cout<<"I hope your day gets better soon.\n";
  break;
  }

  }
  
  while((e != 'y' || e != 'Y')|| (e != 'n' || e != 'N'));

  
   
  cout<<"Goodbye.";

  return 0;
}






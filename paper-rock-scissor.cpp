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



//A program to score the paper-rock-scissor game. Each of two users
//types in either P, R, or S. The program then announces the winner as
//well as the basis for determining the winner: Paper covers rock, Rock
//breaks scissors, Scissors cut paper, or Nobody wins.


int main()
{
  
  using namespace std;

char a, b, c;

do
{


cout<<"Paper-Rock-Scissor\n\n";
cout<<"Player one, enter P = Paper. R = Rock. S = Scissor: ";
cin >> a;
cout<<"Player two, enter P = Paper. R = Rock. S = Scissor: ";
cin >> b;
cout<<"\n\n";

if((a == 'P'||a == 'p') && (b == 'P'||b == 'p'))
{
  cout<<"Nobody wins.\n";
}

else if((a == 'R'||a == 'r') && (b == 'R'||b == 'r'))
{
  cout<<"Nobody wins.\n";
}

else if((a == 'S'||a == 's') && (b == 'S'||b == 's'))
{
  cout<<"Nobody wins.\n";
}

else if((a == 'P'|| a == 'p') && (b == 'R' || b == 'r' ))
{
  cout<< "Player one win. Paper cover rock.\n";
}

else if((a == 'P' || a == 'p') && (b == 'S'|| b == 's'))
{
  cout<<"Player two win. Scissor cut paper.\n";
}

else if((a == 'R' || a == 'r') && (b == 'S' || b == 's'))
{
  cout<<"Player one win. Rock break Scissor.\n";
}

else if((a == 'S'|| a == 's') && (b == 'P' || b == 'p'))
{
  cout<<"Player one win. Scissor cut paper.\n";
}


else if((b == 'R' || b == 'r') && (a == 'S' || a == 's'))
{
  cout<<"Player two win. Rock break Scissor.\n";
}


else if((b == 'P' || b == 'p') && (a == 'R' || a == 'r'))
{
  cout<<"Player two win. Paper covers rock.\n";
}

cout<< endl;
cout<<"Do you want to play again?(Y = yes. N = no.) ";
cin>> c;
}


while((c == 'Y' || c == 'y'));
  
  
  return 0;
}






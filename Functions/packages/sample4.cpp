#include "sample4.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

//This function begins the rolling of two dice and storinh  the value.
int rolldice(){
  srand(time(NULL));
  int d1 = rand()% 6+1;
  int d2 = rand()% 6+1;
  int sum = d1+d2;
  return sum;
}

//This void function outputs a losing message if the user has lsot the game.
void lost(int outcome){
  using std::cout;
  using std::endl;
  cout<<"Oops! You lost!"<<endl;
  cout<<"Losing Roll: "<<outcome;
  exit(0);
}

//This void function outputs a winning message of the user has won the game.
void win(int outcome){
  using std::cout;
  using std::endl;
  cout<<"Nice! You won!"<<endl;
  cout<<"Winning Roll:"<<outcome;
  exit(0);
}

//This void function puts the simulation into the target phase of craps if the user rolls a target number. Th dice will
//be kept rolling until the winning numbers in craps are rolled or if the user rolls the losing numbers.
void targetround(int target){
  using std::cout;
  using std::endl;
  srand(time(NULL));
  int d1 = rand()% 12+1;
  cout<<"Your target is"<<target<<endl;
  int outcome = d1;
  if(outcome == target){
    win(outcome);
  }
  else{
    while(outcome != target){
      d1 = rand() % 12+1;
      outcome = d1;
      cout<<"Rolled :"<<outcome<<endl;
      if(outcome == 2||outcome == 3||outcome == 12){
        lost(outcome);
      }
      if(outcome == 7||outcome == 11){
        win(outcome);
      }
      if(outcome == target){
        win(outcome);
      }
    }
  }
}

//This void function determines how the simulation will continue with respect to the first roll.
void decide(int sum){
  switch(sum){
    case(4):targetround(sum);
            break;

    case(5):targetround(sum);
            break;
    case(6):targetround(sum);
            break;
    case(8):targetround(sum);
            break;
    case(9):targetround(sum);
            break;
    case(10):targetround(sum);
             break;
    case(7):win(sum);
            break;
    case(11):win(sum);
             break;
    case(2):lost(sum);
            break;
    case(3):lost(sum);
            break;
    case(12):lost(sum);
             break;
  }
}

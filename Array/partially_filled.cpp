#include <iostream>
#include "header/partially_filled.h"


int main()
{
  const int MAX_NUMBER_SCORES = 10;
  using std::cout;


  int score[MAX_NUMBER_SCORES], numberUsed;
  cout<<"This program reads golf scores and show\n"
    <<"how much each differes from the average.\n";

  cout<<"Enter golf scores:\n";

  fillArray(score, MAX_NUMBER_SCORES, numberUsed);
  showDifference(score, numberUsed);

  return 0;
}



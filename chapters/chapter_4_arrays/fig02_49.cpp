#include"header/fig02_49.h"

int main()
{
  const int responseSize = 99;
  int frequency[10] = {0},
      response[responseSize] = 
      {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
4, 5, 6, 1, 6, 5, 7, 8, 7};

  mean(response, responseSize);
  median(response,responseSize);
  mode(frequency,response,responseSize);

  return 0;
}

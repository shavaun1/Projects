#include <iostream>
#include"packages/global.h"
using namespace std;
int x = 1;



int main()
{
  using std::cout;
  using std::endl;
  
  int x = 5;
  first();
  second();
  cout <<"local x in inner scope of main is "<< x << endl;

return 0;
}





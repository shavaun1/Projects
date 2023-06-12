#include <iostream>
using namespace std;

void getput(void);

int main()
{
  cout<<"PLease enter a line of text: \n";
  getput();
  cout<<"\nBye bye!" << endl;
  return 0;
}

void getput()
{
  char c;
  if(cin.get(c) && c != '\n')
    getput();
  cout.put(c);
}

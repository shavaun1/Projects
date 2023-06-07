#include <iostream>
using namespace std;

void friendly();
void shy(int audienceCount);

int main()
{
  friendly();
  shy(6);
  cout<<"One more time:\n";
  shy(2);
  friendly();
  cout<<"End of program.\n";
  return 0;
}

void friendly()
{
  cout<<"Hello\n";
}

void shy(int audienceCount)
{
  if(audienceCount < 5)
    return;
  cout<<"Goodbye\n";
}

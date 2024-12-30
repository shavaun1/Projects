//Using the continue statement in a for structure
#include <iostream>
using std::cout; using std::endl;

int main()
{
  for(int x = 1; x <= 10; x++){
    if(x == 5)
      continue;

    cout<<x<<" ";
  }
  cout<<"\nUsed continue to skip printing the value 5"
    <<endl;
  return 0;
}

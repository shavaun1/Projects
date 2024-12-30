//Using the break statement in a for structure
#include<iostream>
using std::endl; using std::cout;

int main()
{
  int x;
  for(x = 1; x <= 10; x++){
    if(x == 5)
      break;
    cout<< x <<" ";
  }
  cout<<"\nBroke out of loop at x of "<< x <<endl;
  return 0;
}

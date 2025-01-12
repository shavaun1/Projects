//Randomizing die-rolling
#include<iostream>
#include<iomanip>
#include<cstdlib>

using std::endl; using std::cout; using std::cin; using std::setw;

int main()
{
  unsigned seed;

  cout<<"Enter seed: ";
  cin >> seed;
  srand(seed);

  for(int i = 1; i <= 10; i++){
    cout<< setw(10) << 1 + rand()%6;

    if(i%5 == 0 )
      cout<< endl;
  }

  return 0;
}

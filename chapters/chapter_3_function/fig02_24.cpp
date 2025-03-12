//Randomizing die-rolling
#include<iostream>
#include<iomanip>
#include<random>

using std::endl; using std::cout; using std::cin; using std::default_random_engine; using std::uniform_int_distribution;

int main()
{
  unsigned seed{0};

  cout<<"Enter seed: ";
  cin >> seed;
  
  default_random_engine engine{seed};
  uniform_int_distribution randomDie{1,6};

  for(int counter{1}; counter <= 10; ++counter){
    cout<< randomDie(engine)<<" ";
  }

  cout<< '\n';
}

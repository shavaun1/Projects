//Shifted, scaled integers produced by 1+ rand() % 6

#include<iostream>
#include<random>

using std::cout; using std::endl; using std::default_random_engine; using std::uniform_int_distribution;
int main()
{
  default_random_engine engine{}; //engine that produces random numbers

  uniform_int_distribution randomDie{1,6}; //distribution that produces the int value 1-6 with equal likelihood

  for(int counter{1}; counter <= 10; ++counter){
    cout << randomDie(engine) <<" ";

  }

  cout<< '\n';
}

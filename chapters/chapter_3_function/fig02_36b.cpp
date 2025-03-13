//Iterative function factorial

#include<iostream>
#include<iomanip>

using std::cout; using std::setw;

long factorial(int number);

int main()
{
  for (int counter{0}; counter <= 10; ++counter)
  {
    cout<<setw(2)<<counter<<"!= "<< factorial(counter)
      <<'\n';
  }
}

long factorial(int number)
{
  long result{1};

  for(int i{number}; i >= 1; --i)
  {
    result *= i;
  }

  return result;
}

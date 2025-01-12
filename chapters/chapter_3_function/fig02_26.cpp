//recursive factorial function

#include<iostream>
#include<iomanip>

using std::cout; using std::endl; using std::setw;

unsigned long factorial(unsigned long);

int main()
{
  for(int i = 0; i <= 10; i++)
    cout<<setw(2)<< i << "! = "<< factorial(i)<< endl;

  return 0;
}

unsigned long factorial(unsigned long number)
{
  if(number <= 1)
    return 1;
  else 
    return number * factorial(number -1 );

}

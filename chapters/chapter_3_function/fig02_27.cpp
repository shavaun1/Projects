//recursive fibonacci function

#include<iostream>
using std::cout; using std::endl; using std::cin;

long fibonacci(long);

int main()
{
  long result, number;

  cout<<"Enter an integer";
  cin >> number;
  result = fibonacci(number);
  cout<<"Fibonacci("<< number <<") = "<< result << endl;
  return 0;
}

long fibonacci(long n)
{
  if( n == 0 || n == 1 )
    return n;
  else
    return fibonacci(n -1) + fibonacci(n - 2);
}


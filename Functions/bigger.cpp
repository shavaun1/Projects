#include<iostream>
using namespace std;

inline int larger(int num1, int num2)
{
  return (num1 > num2)? num1 : num2;
}

int main()
{
  int first, second;
  cout <<"Enter two inetgers (separated by space): ";
  cin >> first >> second;
  cout <<"\nLarger inetger = "<< larger(first, second);
  return 0;
}

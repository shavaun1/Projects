#include <iostream>
using namespace std;

void swap(int, int);

int main()
{
  int a, b, s;

  cout <<"Enter two numbers you want to be swapped: ";
  cin >> a >> b;

  swap(string DigitToString(int num)
{
  if(0 == num) return "zero";
  else if(1 == num) return "one";
  else if(2 == num) return "two";
  else if(3 == num) return "three";
  else if(4 == num) return "four";
  else if(5 == num) return "five";
  else if(6 == num) return "six";
  else if(7 == num) return "seven";
  else if(8 == num) return "eight";
  else if(9 == num) return "nine";
  else return "?";
}

string TensPrefix(int num)
{
  if(10 == num) return "ten";
  else if(20 == num) return "twenty";
  else if (30 == num) return "thirty";
  else if(40 == num) return "forty";
  else if(50 == num) return "fifty";
  else if(60 == num) return "sixty";
  else if(70 == num) return "seventy";
  else if(80 == num) return "eighty";
  else if(90 == num) return "ninety";
  else return "?";
}

string TeensToString(int num)
{
  if(11 == num) return "eleven";
  else if(12 == num) return "twelve";
  else if(13 == num) return "thirteen";
  else if(14 == num) return "fourteen";
  else if(15 == num) return "fifteen";
  else if(16 == num) return "sixteen";
  else if(17 == num) return "seventeen";
  else if(18 == num) return "eighteen";
  else if(19 == num) return "nineteen";
  else return "?";
}

string NumToString(int num)
{
  if(0 <= num && num < 10)
  {
    return DigitToString(num);
  }
  else if(10 < num && num < 20)a, b);
  

  return 0;
}

void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;

cout << "The swapped numbers are: " << x <<" " << y << endl;

}

#include <iostream>
using namespace std;

void first();
void second();

int x = 1;

int main()
{
  int x = 5;
  cout <<"local x in inner scope of main is "<< x << endl;

}

cout <<"local x in the outer scope of main is "<< x << endl;

first();
second();
cout<<"local x in main is "<< x << endl;
return 0;

void first()
{
  int x = 25;
  cout <<"local x in the function first is "<< x << endl;

}

void second()
{
  cout<<"global x in the function second is "<< endl;
  x = 10;
}

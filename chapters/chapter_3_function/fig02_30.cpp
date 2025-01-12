//Comparing call-by-value and call-by-reference with reference

#include<iostream>
using std::endl; using std::cout;

int squareByValue(int );
void squareByReference(int &);

int main()
{
  int x = 2, z = 4;

  cout<<"x = "<< x <<" before squareByValue\n"
    <<"Value returned by squareByValue: "
    <<"x = "<< x << " after squareByValue\n"<< endl;

  cout<< "z = "<< z <<" before squareByReference"<<endl;
  squareByReference(z);
  cout <<"z = "<< z <<" after squareByReference"<< endl;

  return 0;
}

int squareByValue(int a)
{
  return a *= a;
}

void squareByReference(int &cRef)
{
  cRef *= cRef;
}

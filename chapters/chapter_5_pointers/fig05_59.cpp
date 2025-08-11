#include<iostream>

using std::cout;

int main()
{
  constexpr int a{7};
  const int* aPtr{&a};

  cout<<"The address of a is "<< &a
    <<"\nThe value of aPtr is "<< aPtr;
  cout <<"\n\nThe value of a is "<< a
    <<"\nThe value of *aPtr is "<< *aPtr << '\n';
}

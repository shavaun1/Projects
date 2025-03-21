//Histrogram printing program
#include<iostream>
#include<format>
#include<array>
using std::cout; using std::format; using std::array;

int main()
{
  const int arraySize {10};
  array<int,arraySize> n{19,3,15,7,11,9,13,5,17,1};

  cout <<format("{:>13}{:>17}\n","Element","Histrogram");

  for(int i{0}; i < arraySize; i++){
    cout<<format("{:>7}{:>13}",i,n[i]);

    for(int j{0}; j < n[i]; j++)
      cout<<'*';
    cout<<'\n';
  }

  return 0;
}

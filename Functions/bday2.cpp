#include<iostream>
#include<string>
using namespace std;

void Sing(string person)
{
  cout<<"Happy birthday to you"<<endl;
  cout<<"Happy birthday to you"<<endl;
  cout<<"Happy birthday dear "<< person <<endl;
  cout<<"Happy birthday to you"<<endl;
  cout<< endl;
}

int main()
{
  Sing("Grace");
  Sing("Alan");
  Sing("John");
  Sing("Ada");
  Sing("Blaise");
  return 0;
}

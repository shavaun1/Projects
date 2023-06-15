#include<iostream>
#include<string>
using namespace std;

void Hi(string);
void Greetings();

void Hi(string name)
{
  cout<<"Hi "<< name<< endl;
  Greetings();
}

void Greetings()
{
  cout<<"Thing are happening inside this computer"<< endl;
}

int main()
{
  Hi("Shavaun");
  return 0;
}

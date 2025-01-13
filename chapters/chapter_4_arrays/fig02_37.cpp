//initializing an array
#include<iostream>
#include<iomanip>

using std::cout; using std::endl; using std::setw;

int main()
{
  int i, n[10];

  for(i = 0; i < 10; i++)
    n[i] = 0;

  cout<<"Element"<<setw(13) <<"Value"<< endl;

  for(i = 0; i < 10; i++)
    cout<<setw(7) << i << setw(13) << n[i] << endl;
  
  return 0;
}

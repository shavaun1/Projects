//Initializing an array with a declartion
#include<iostream>
#include<iomanip>

using std::cout; using std::endl; using std::setw;

int main()
{
  int n[10] = {32,27,64,18,95,14,90,70,60,37};

  cout <<"Element "<<(13)<<"Value" << endl;

  for(int i = 0; i < 10; i++)
    cout<< setw(7) << i << setw(13) << n[i] << endl;

  return 0;
}


//Using the do/while repetition structure
#include<iostream>
using std::endl; using std::cout;
int main()
{
  int counter{1};
  
  do{
    cout<< counter <<" ";

  }while(++counter <= 10);

  cout<<endl;

  return 0;
}

#include<iostream>
#include "stack.h"
using namespace std;
using namespace stacksavitch;

int main()
{
  Stack s;
  char next, ans;

  do
  {
    cout<<"Enter a word: ";
    cin.get(next);
    while(next != '\n')
    {
      s.push(next);
      cin.get(next);
    }

    cout<<"Written backward that is: ";
    while(! s.empty())
      
    cout<<s.pop();
    cout<<endl;

    

    cout<<"Again?(y/n): ";
    cin >> ans;
    cin.ignore(1000, '\n');
  }while(ans != 'n' && ans != 'N');

  return 0;

}

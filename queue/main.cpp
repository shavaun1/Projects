#include<iostream>
#include "queue.h"

using namespace std;
using namespace queuesavitch;

int main()
{
  Queue q;
  char next, ans;

  do
  {
    cout<<"ENter a word: ";
    cin.get(next);
    while(next != '\n')
    {
      q.add(next);
      cin.get(next);
    }

    cout<<"YOu entered:: ";
    while(! q.empty())
      cout<<q.remove();
    cout<<endl;

    cout<<"Again?(y/n): ";
    cin>>ans;
    cin.ignore(10000,'\n');
  }while(ans != 'n' && ans != 'N');

  return 0;
}

#include<iostream>
#include <vector>
//#include<interator>
using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> container;
  for(int i = 1; i <= 4; i++)
    container.push_back(i);
  cout<<"Here is what is in the container:\n";
  vector<int>::interator p;
  for(p = container.begin(); p != container.end(); p++)
    cout<< *p << " ";
  cout << endl;
  cout << "Setting enteries to 0:\n";
  for(p = container.begin(); p != container.end(); p++)
    *p = 0;
  
  cout<< "Container now contains:\n";
  for(p = container.begin(); p != container.end(); p++)
    cout<<*p << " ";
  cout << endl;
  return 0;
}

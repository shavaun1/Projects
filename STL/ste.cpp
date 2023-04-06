#include <iostream>
#include <set>
using std::cout;
using std::endl;
using std::set;

int main()
{
  set<char> s;
  s.insert('A');
  s.insert('D');
  s.insert('D');
  s.insert('C');
  s.insert('C');
  s.insert('B');

  cout << "The set conatins:\n";
  set<char>::const_iterator p;
  for(p = s.begin(); p != s.end(); p++)
    cout<< *p <<" ";
  cout << endl;

  cout <<"Remove C.\n";
  s.erase('C');
  for(p = s.begin(); p != s.end(); p++)
    cout << *p << " ";
  cout << endl;

  return 0;
}

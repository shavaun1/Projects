#include <algorithm>//copy algorith 
#include<iostream>
#include<iterator>//ostream_iterator
#include<list>//list class-template definition
#include<vector>

using std::list; using std::ostream_iterator; using std::cout;

//printlist function template definition; uses
//ostream_iterator and copy algorithm to output list elements

template <typename T>
void printList(const list<T>& items)
{
  if(items.empty())
  {
    cout<<"List is empty";
  }
  else
  {
    ostream_iterator<T> output{cout," "};
    std::ranges::copy(items, output);
  }
}

int main()
{
  list<int> values{}; //create list of ints

  //insert items in values
  values.push_front(1);
  values.push_front(2);
  values.push_back(4);
  values.push_back(3);

  cout<<"values contains: ";
  printList(values);

  values.sort();
  cout<<"\nvalues after sorting contains: ";
  printList(values);
}

#include <algorithm>//copy algorith 
#include<iostream>
#include<iterator>//ostream_iterator
#include<list>//list class-template definition
#include<vector>

using std::list; using std::ostream_iterator; using std::cout; using std::vector;

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
   
  //insert elements if ints into otherValues
  vector ints{2,6,4,8};
  list<int> otherValues{};//create list of ints
  otherValues.insert(otherValues.cbegin(), ints.cbegin(), ints.cend());
  cout<<"\nAfter insert, otherValues contains: ";
  printList(otherValues);

  //remove otherValues elements and insert at end of values
  values.splice(values.cend(), otherValues);
  cout<<"\nAfter splice, values contains: ";
  printList(values);

  values.sort(); //sort values
  cout<<"nAfter sort, values conatins: ";
  printList(values);

  //insert elements of ints into otherValues
  otherValues.insert(otherValues.cbegin(), ints.cbegin(),ints.cend());
  otherValues.sort(); //sprt the list
  cout<<"\nAfter insert and sort, otherValues contains: ";
  printList(otherValues);

  //remove otherValues elements and insert into values in sorted order
  values.merge(otherValues);
  cout<<"\nAfter merge:\n values contains: ";
  printList(values);
  cout<<"\n otherValues contains: ";
  printList(otherValues);

  values.pop_front(); //remove elements from front
  values.pop_back(); //remove elements from back
  cout<<"\nAfter pop_front and pop_back: \n values contains: ";
  printList(values);
  values.unique(); //remove duplicate elements
  cout<<"\nAfter unique, values contains: ";
  printList(values);

  values.swap(otherValues); //swap elements of values and otherValues
  cout<<"\nAfter swap:\n values contains: ";
  printList(values);
  cout<<"\n otherValues contains: ";
  printList(otherValues);

  //replace contents of values with elements of otherValues
  values.assign(otherValues.cbegin(), otherValues.cend());
  cout<<"\nAfter assign, values contains: ";
  printList(values);

  //remove otherValues elements and insert into values in sorted order
  values.merge(otherValues);
  cout<<"\nAfter merge, values contains: ";
  printList(values);

  values.remove(4); //remove all 4s
  cout<<"\nAfter remove(4), values contains: ";
  printList(values);
  cout<<"\n";
}

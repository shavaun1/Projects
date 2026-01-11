#include<algorithm> //copy algorithm
#include<format>
#include<iostream>
#include<ranges>
#include<iterator> //ostream_iterator iterator
#include<vector>

using std::format; using std::cout; using std::vector; using std::ostream_iterator; using std::copy;


int main()
{
  vector values{1,2,3,4,5};
  vector<int> integers{values.cbegin(), values.cend()};
  ostream_iterator<int> output{cout," "};

  cout<<"integers conatins: ";
  copy(integers.cbegin(), integers.cend(), output);

  cout<<format("\nfront: {}\nback: {}\n\n", integers.front(), integers.back());

  integers[0] = 7; //set first element to 7
  integers.at(2) = 10; //set element at positiont 2 to 10.

  //insert 22 as second element
  integers.insert(integers.cbegin() + 1, 22);

  cout<<"contents of vector integers integers after changes: ";
  std::ranges::copy(integers, output);
  integers.erase(integers.cbegin()); //erase first element
  cout<<"\n\nintegers after erasing first element: ";
  std::ranges::copy(integers, output);

  //erase remaining elements
  integers.erase(integers.cbegin(), integers.cend());

  cout<<format("\nErased all elements: integers {} empty\n", 
      integers.empty()? "is": "is not");

  //insery elements from the vector values
  integers.insert(integers.cbegin(),values.cbegin(),values.cend());
  cout<<"\nContents of vector integers before clear: ";
  std::ranges::copy(integers,output);

  //empty integers; clear empties a collection
  integers.clear();
  cout<<format("\nAfter clear, integers {} empty\n",
      integers.empty()?"is": "is not");

}

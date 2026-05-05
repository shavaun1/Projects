#include <algorithm> //copy algorithm
#include<deque> // deque class-template
#include<iostream> 
#include<iterator> //ostream_iterator

using std::cout; using std::deque; using std::ostream_iterator;

int main()
{
  deque<double> values; //create deque of doubles
  ostream_iterator<double> output{cout," "};

  //insert elements in values
  values.push_front(2.2);
  values.push_front(3.5);
  values.push_back(1.1);

  cout<<"values contains: ";

  //use subscript operator to obtain elements of values
  for(size_t i{0}; i < values.size(); ++i)
  { 
    cout<<values[i] <<' ';
  }

  values.pop_front(); //remove first elements
  cout<<"\nAfter pop_front, values contains: ";
  std::ranges::copy(values, output);

  //use subscript operator to modify element at location 1
  values[1] = 5.4;
  cout<<"\nAfter values[1] = 5.4, values contains: ";
  std::ranges::copy(values, output);
  cout<<"\n";

}

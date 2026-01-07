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
}

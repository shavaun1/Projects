#include<algorithm> // copy algorithm
#include<format>
#include<iostream>
#include<iterator> //ostream_iterator
#include<ranges>
#include<set> // multiset class-template definition
#include <vector>

using std::cout; using std::format; 
using std::less; 

int main()
{
  std::multiset<int, less<int>> ints{}; //multiset of int values

  cout<<format("15s in ints: {}\n", ints.count(15));

  cout<<"\nInserting two 15s into ints\n";
  ints.insert(15); //insert 15 in ints
  ints.insert(15);
  cout<<format("15s in ints: {}\n\n", ints.count(15));

  //serch for 15 and 20 in ints; find returns an iterator
  for(int i :{15,20})
  {
    if(auto result{ints.find(i)}; result != ints.end())
    {
      cout<<format("Found {} in ints\n", 1);
    }
    else
    {
      cout<<format("Did not find {} in ints\n", 1);
    }
  }

  //search for 15 and 20 ints; contains returns bool
  for(int i : {15,20})
  {
    if(ints.contains(i))
    {
      cout<<format("Found {} in ints\n", i);
    }
    else
    {
      cout<<format("Did not find {} in ints\n", i);
    }
  }

  //insert elements of vector values into ints
  const std::vector values{7,22,9,1,18,30,100,22,85,13};
  ints.insert(values.cbegin(), values.cend());
  cout<<"\nAfter insert, ints contains:\n";
  std::ranges::copy(ints, std::ostream_iterator<int>{cout," "});

  //determine lower and upper bound of 22 ints
  cout<<format("\n\nlower_bound(22): {}\nupper_bound(22): {}\n\n", *ints.lower_bound(22), *ints.upper_bound(22));

  //use equal_range to determine lower and upper bound of 22 in ints
  auto p{ints.equal_range(22)};
  cout<<format("lower_bound(22): {}\nupper_bound(22): {}\n", *(p.first),(p.second));
}

#include<format>
#include<iostream>
#include<ranges>
#include<vector>//vector class-template definition
using std::cout; using std::format; using std::vector;  

//dispaly value appended to vector and updated vector size and capacity
void showResult(int value, size_t size, size_t capacity)
{
  cout<<format("appended: {}; size: {}; capacity: {}\n", value, size, capacity);
}

int main()
{
  vector<int> integers{}; //create vector ints
  cout<<"Size of integers: "<<integers.size()
    <<"\nCapacity of integers: "<<integers.capacity()<<"\n\n";

  //append 1-10 to integers and dispaly updated size capacity
  for(int i : std::views::iota(1,11))
  {
    integers.push_back(i); //push_back is in vector, deque list
    showResult(i, integers.size(), integers.capacity());

  }

}

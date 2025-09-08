#include<format>
#include<iostream>
#include<array>

using std::cout; using std::format; using std::array; using std::to_array;

int main()
{
  const auto display
  {
    [](const auto& items)
    {
      for(const auto& item:items)
      {
        cout<<format("{}",item);
      }
    }
  };

  const auto array1{array{"abc"}};
  cout<<format("array1.size() = {}\narray1: ", array1.size());
  display(array1);

  const auto array2{to_array("C++20")};
  cout<<format("\n\narray2.size() = {}\narray2: ", array2.size());
  display(array2);

  cout<<'\n';
}

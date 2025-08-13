#include<format>
#include<iostream>
#include<array>

using std::cout; using std::array; using std::format; using std::to_array;

int main()
{
  const auto display
  {
    [](const auto& items)
    {
      for(const auto& item: items)
      {
        cout<<format("{} ",item);
      }
    }
  };
  const int values1[]{10,20,30};

  const auto array1{to_array(values1)};

  cout<<format("array1.suze() = {}\n", array1.size())
    <<"array1: ";
  display(array1);
  
  const auto array2{to_array({1,2,3,4})};
  cout<<format("\n\narray1.size() = {}\n", array2.size())
    <<"array2: ";

  cout<<'\n';
}

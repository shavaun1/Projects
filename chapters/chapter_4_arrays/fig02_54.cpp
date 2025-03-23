//Sorting
#include<array>
#include<algorithm> // contains sort and binary_search
#include<format>
#include<iostream>
#include<string>

using std::format; using std::string; using std::array; using std::cout; using std::begin; using std::end;
using std::binary_search; using namespace std::string_literals; using std::sort;

int main()
{
  array colors{"red"s, "orange"s, "yellow"s, "green"s, "blue"s,"indigo"s,"violet"s};
   
  //output original array
  cout<<"Unsorted colors array:\n";
  for(const string& color : colors)
  {
    cout<<format("{} ",color);
  }
  
  //sort content of colors 
  sort(begin(colors), end(colors));
  
  //output sorted array
  cout<<"\n\nSorted colors array:\n";
  for(const string& color: colors)
  {
    cout<<format("{} ", color);
  }
  
  //search for "indigo" in colors 
  bool found{binary_search(begin(colors),end(colors),"indigo")};
  cout<<format("\n\n\"indigo\" {} found in colors array\n", found? "was" : "was not");
  
  //search for "cyan" in colors 
  found = binary_search(begin(colors), end(colors),"cyan");

  cout<<format("\"cyan\" {} found in colors array\n", found? "was" : "was not");
}

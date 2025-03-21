//Student poll program
#include <iostream>
#include<array>
#include<format>

using std::cout; using std::format; using std::array;

int main()
{
  constexpr array responses {1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,8,6,7,5,6,6,5,6,4,8,10};
  constexpr size_t frequencySize{11};
  array<int,frequencySize> frequency{};

  for(const int& response : responses)
  {
       ++frequency.at(response);
   }

  cout<<format("{}{:>12}\n", "Rating","Frequency");


  for(size_t rating{1}; rating < frequency.size(); ++rating)
  {

    cout<<format("{:>6}{:>12}\n",rating,frequency.at(rating));//frequency);
  
  }

 }




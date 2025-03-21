//Roll a six-sided die 6000 times
#include<iostream>
#include<format>
#include<random>
#include<array>

using std::cout; using std::random_device; using std::default_random_engine;using std::uniform_int_distribution; using std::format; using std::array;

int main()
{
   random_device rd;
   default_random_engine engine{rd()};
   uniform_int_distribution randomDie{1,6};
   constexpr size_t arraySize{7};
   array<int,arraySize> frequency{};

   for(int roll{1}; roll <= 60'000'000; ++roll)
   {
     ++frequency.at(randomDie(engine));
    }

   cout<<format("{}{:>13}\n","Face","Frequency");

   for(size_t face{1}; face < frequency.size(); ++face)
   {
     cout<<format("{:>4}{:>13}\n",face,frequency.at(face));
  }
   return 0;
}

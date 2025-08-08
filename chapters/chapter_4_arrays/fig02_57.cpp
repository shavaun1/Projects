#include <array>
#include<format>
#include<iostream>
#include<numeric>
#include<ranges>

using std:: cout; using std::format; using std::accumulate; using std::string;
using std::views; using std::array;

int main(){
  auto showValues{
    [](auto& values, const std::string& message){
      cout<<format("{}: ",message);

      for(const auto& value : values){
        cout<<format("{} ",value);
      }
      cout<<'\n';
    }
  };

auto values1{std::views::iota(1,11)};
showValues(values1, "Generate integers 1-10");

auto values2{values1 | views::filter([](const auto& x){return x% 2 == 0;})};
showValues(values2,"Filtering even integers");

auto values3{ values2 | views::transform([](const auto& x){return x * x;}) };
showValues(values,"Mapping even integers to squares");

auto values4{ values1 | views::filter([](const auto& x){return x % 2 == 0;})
                      | views::transform([](const auto& x){return x * x;})};
showValues(values4, "Squares of even integers");

cout <<format("Sum squares of even inetgers 2-10: {}\n", accumulate(begin(values4),end(values4),0));

constexpr array numbers{1,2,3,4,5,6,7,8,9,10};
auto values5{ numbers | views::filter([](const auto& x){return x % 2 == 0;})
                      | views::transform([](const auto& x) {return x * x;})};
showValues(values5,"Squares of even intgers in array numbers");

}

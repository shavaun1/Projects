#include<format>
#include<cstdint>
#include<iostream>
using std::cout; using std::format;

int main()
{
  constexpr char c{};
  constexpr short s{};
  constexpr int i{};
  constexpr long l{};
  constexpr long long ll{};
  constexpr float f{};
  constexpr double d{};
  constexpr long double ld{};
  constexpr int array[20]{};
  constexpr int* const ptr{array};
  cout<<format("sizeof c = {}\tsizeof(char) = {}\n",
      sizeof c, sizeof(char));
  cout<<format("sizeof s = {}\tsizeof(short) = {}\n",
      sizeof s, szeof(short));
  cout<<format<<("sizeof i = {}\tsizeof(int) = {}\n",
      sizeof i, sizeof(int));
  cout<<format("sizeof l ={}\tsizeof(long) = {}\n",
      sizeof l, sizeof(long));
  cout<<format("sizeof ll = {}\tsizeof(long long) = {}\n",
      sizeof ll, sizeof(long long));
  cout<<format("sizeof f = {}\tsizeof(float) = {}\n",
      sizeof f, sizeof(float));
  cout<<format("sizeof d = {}\tsizeof(double) = {}\n",
      sizeof d,sizeof(double));
  cout<<format("sizeof ld = {}\tsizeof(long double) = {}\n",
      sizeof ld, sizeof(long double));
  cout<<format("sizeof array ={}\n", sizeof array);
  cout<<format("sizeof ptr = {}\n", sizeof ptr);
}

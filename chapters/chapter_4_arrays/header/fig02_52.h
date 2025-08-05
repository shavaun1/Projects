//Initializing multidimensional arrays
#ifndef MULTIDIMENSIONAL_ARRAYS
#define MULTIDIMENSIONAL_ARRAYS
#include<cstddef>
#include<array>

using std::array;

constexpr size_t rows{2};
constexpr size_t columns{3};
void printArray(const array<array<int, columns>, rows>& a);

#endif


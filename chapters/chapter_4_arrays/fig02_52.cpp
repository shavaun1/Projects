#include"header/fig02_52.h"
#include<iostream>
#include<array>
//#include<cstddef>

using std::cout; using std::array;

int main()
{
  constexpr array values1{ array{1,2,3},array{4,5,6} };
  constexpr  array values2{array{1,2,3},array{4,5,0}};
      

  cout<<"Values in array1 by row are: \n";
  printArray(values1);

  cout<<"Values in array2 by row are:\n";
  printArray(values2);


  return 0;

}

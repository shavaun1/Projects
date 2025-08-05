#include"fig02_52.h"
#include<iostream>
#include<array>
//#include<cstddef>

using std::array; using std::cout;

//constexpr size_t rows{2};
//constexpr size_t columns{3};

void printArray(const array<array<int, columns>, rows>& a)
{
  //loop through array's rows 
  for(const auto& row : a){
    //loop through columns of current row 
    for(const auto& element : row){  
      cout<<element<<' ';
    }

    cout<< '\n'; //start new line of output
  }
}

#include"header/fig02_52.h"
#include<iostream>

using std::cout; using std::endl;

int main()
{
  int array1[2][3] = { {1,2,3},{4,5,6} },
      array2[2][3] = {1,2,3,4,5},
      array3[2][3] = {{1,2},{4}};

  cout<<"Values in array1 by row are: "<< endl;
  printArray(array1);

  cout<<"Values in array2 by row are:"<< endl;
  printArray(array2);

  cout<<"Values in array3 by row are:"<<endl;
  printArray(array3);

  return 0;

}

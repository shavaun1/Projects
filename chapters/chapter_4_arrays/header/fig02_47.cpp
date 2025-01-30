#include "fig02_47.h"
#include<iostream>

using std::cout; using std::endl;

//Demonstraight a static local array

void staticArrayInit(void)
{
  static int array1[3];
  int i;

  cout<<"\nValues on entering staticArrayInit:\n";

  for(i = 0; i < 3; i++)
    cout<<"array1["<< i <<"] = "<<array1[i]<<" ";

  cout<<"\nValues on exiting staticArrayInit:\n";

  for(i = 0; i < 3; i++)
    cout<<"array1["<< i <<"] = "
      <<(array1[i] += 5) <<" ";
}

//fuction to Demonstraight an automatic local array

void automaticArrayInit(void)
{
  int i, array2[3]={1,2,3};

  cout<<"\n\nValues on entering automaticArrayInit: \n";

  for(i = 0; i < 3; i++)
    cout<<"array2["<< i <<"]= "  << array2[i] <<" ";

  cout<<"\nValues on exiting automaticArrayInit:\n";

  for(i = 0; i < 3; i++)
    cout<<"array2["<< i <<"] = "
      <<(array2[i] += 5)<<" ";
}
